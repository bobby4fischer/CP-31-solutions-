#include<bits/stdc++.h>
#define god_speed      ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);
using namespace std;
#define ll  long long
ll gcd(ll a, ll b){if (b == 0)return a;return gcd(b, a % b);} ll lcm(ll a, ll b){return ((a/gcd(a,b))*b);}
#define all(v) v.begin(), v.end() 
#define rall(v) v.rbegin(),v.rend()
#define f    first
#define s    second
#define FOR(v) for(auto&i:v) cin>>i;
void gen()
{
    ll n;
    cin>>n;
    vector<ll>v(n);
    FOR(v);
    vector<ll>suff(n),pref(n);
    pref[0]=v[0];
    suff[n-1]=v[n-1];
    for(ll i=1;i<n;i++) pref[i]=pref[i-1]^v[i];
    for(ll i=n-2;i>=0;i--) suff[i]=suff[i+1]^v[i];
    for(ll i=0;i<n-1;i++)
    {
        if(pref[i]==suff[i+1]) {cout<<"YES"<<'\n';return;}
    }
    ll x=-1,y=-1;
    for(ll i=0;i<n;i++)
    {
        if(pref[i]==pref[n-1])
        {
            x=i;
            break;
        }
    }
    for(ll i=n-1;i>=0;i--)
    {
        if(suff[i]==pref[n-1])
        {
            y=i;
            break;
        }
    }
    if(x>=0 and y>=0 and x<y-1) cout<<"YES"<<'\n';
    else cout<<"NO"<<'\n';
}
signed main()
{
    god_speed
    ll t;
    cin>>t;
    while(t--) 	gen();
    return 0;
}