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
    ll n,k;
    cin>>n>>k;
    map<ll,ll>mp;
    for(ll i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        if(x%k) mp[k-x%k]++;
    }
    ll ans=0;
    ll cnt=0;
    for(auto it=mp.begin();it!=mp.end();it++)
    {
        cnt = k*(it->second-1LL)+it->first;
        ans=max(ans,cnt); 
    }
    if(ans) ans++;
    cout<<ans<<'\n';
}
signed main()
{
    god_speed
    ll t;
    cin>>t;
    while(t--) 	gen();
    return 0;
}