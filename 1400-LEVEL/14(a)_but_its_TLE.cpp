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
    ll n,m;
    cin>>n>>m;
    unordered_map<ll,set<pair<ll,ll>>>mp;
    for(ll i=1;i<=n;i++)
    {
        for(ll j=1;j<=m;j++)
        {
            ll x;
            cin>>x;
            mp[x].insert({i,j});
        }
    }
    ll ans=0;
    for(auto it=mp.begin();it!=mp.end();it++)
    {
        auto it2=(it->second).begin();
        while(it2!=(it->second).end())
        {
            auto it4=it2;
            auto it3=(++it4);
            while(it3!=(it->second).end())
            {
                ans+=abs((*it3).f-(*it2).f)+abs((*it3).s-(*it2).s);
                it3++;
            }
            it2++;
        }
    }
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