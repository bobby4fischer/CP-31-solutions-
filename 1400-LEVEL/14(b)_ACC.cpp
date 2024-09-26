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
    unordered_map<ll,vector<pair<ll,ll>>>mp;
    for(ll i=1;i<=n;i++)
    {
        for(ll j=1;j<=m;j++)
        {
            ll x;
            cin>>x;
            mp[x].push_back({i,j});
        }
    }
    ll ans=0;
    for(auto &it:mp) 
    {
        auto &positions=it.second;
        vector<ll> rows,cols;
        for(auto &pos:positions) 
        {
            rows.push_back(pos.f);
            cols.push_back(pos.s);
        }
        sort(all(rows));
        sort(all(cols));
        ll sum=0;
        for(ll i=0;i<rows.size();i++) 
        {
            ans+=rows[i]*i-sum;
            sum+=rows[i];
        }
        sum=0;
        for(ll i=0;i<cols.size();i++) 
        {
            ans+=cols[i]*i-sum;
            sum+=cols[i];
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