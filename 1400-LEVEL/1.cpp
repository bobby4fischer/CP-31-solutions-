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
pair<ll,ll> count_0(ll n)
{
    ll temp=0;
    while(n%10==0)
    {
        n/=10;
        temp++;
    }

    return {log10(n)+1,temp};
}
void gen()
{
    ll n,m;
    cin>>n>>m;
    ll ans=0;
    vector<ll>for_10s; // [10] just for size else (10,{0,0}) 
    for(int i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        if(x%10!=0) ans+=log10(x)+1;
        else
        {
            pair<ll,ll> temp=count_0(x);
            for_10s.push_back(temp.s);
            ans+=temp.f;
        }
    }
    sort(rall(for_10s));
    for(int i=1;i<for_10s.size();i+=2)
    {
        ans+=for_10s[i];
    }
    
    if(ans>=m+1) cout<<"Sasha"<<'\n';
    else cout<<"Anna"<<'\n';
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