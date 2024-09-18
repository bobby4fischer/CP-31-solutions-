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
    unordered_map<ll,ll>mp;
    for(ll i=1;i<=n;i++)
    {
        ll x;
        cin>>x;
        mp[x-i]+=x;
    }
    ll ans=INT_MIN;
    for(auto it=mp.begin();it!=mp.end();it++) ans=max(ans,it->second);
    cout<<ans<<'\n';
}
signed main()
{
    god_speed
    ll t=1;
    //cin>>t;
    while(t--) 	gen();
    return 0;
}