#include<bits/stdc++.h>
#define god_speed      ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);
using namespace std;
#define ll        long long
ll gcd(ll a, ll b){if (b == 0)return a;return gcd(b, a % b);}
ll lcm(ll a, ll b){return ((a/gcd(a,b))*b);}
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(),v.rend()
#define vll vector<ll>v(n)
#define f    first
#define s    second
#define FOR(v) for(auto&i:v) cin>>i;
#define rep2(a,b) for(ll i=a;i>=b;i--)
bool odd(ll num) { return ((num & 1) == 1); }
bool even(ll num) { return ((num & 1) == 0); }
void gen()
{
    ll n;cin>>n;
    vector<int>v(n);
    FOR(v);
    vector<int>s;
    vector<int>t;
    s.push_back(INT_MAX);
    t.push_back(INT_MAX);
    ll ans=0;
    int ind1=0,ind2=0;
    for(int i=0;i<n;i++)
    {
        if(min(s[ind1],t[ind2])<v[i]  &&  v[i] <=max(s[ind1],t[ind2]))
        { 
            if(max(s[ind1],t[ind2])==s[ind1]) {s.push_back(v[i]);ind1++;}
            else {t.push_back(v[i]);ind2++;}
        }
        else if(v[i]>max(s[ind1],t[ind2]))
        {
            if(min(s[ind1],t[ind2])==s[ind1]) {s.push_back(v[i]);ind1++;}
            else {t.push_back(v[i]);ind2++;}
            ans++;
        }
        else
        {
            if(min(t[ind2],s[ind1])==s[ind1]) {s.push_back(v[i]);ind1++;}
            else {t.push_back(v[i]);ind2++;}
        }
    }
    cout<<ans<<'\n';
}
signed main()
{
    god_speed
    ll t;
    cin>>t;
    while(t--)
    {
    gen();
    }
    return 0;
}