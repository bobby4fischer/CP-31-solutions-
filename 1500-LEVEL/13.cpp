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
vector<ll>v;
int dp[200010][2];
ll f(ll i,bool flag)
{
    if(i>=v.size()) return 0;
    if(dp[i][flag]!=-1) return dp[i][flag];
    ll ans=LLONG_MAX;
    if(flag)
    {
        ans=min(ans,v[i]+f(i+1,false));
        ans=min({ans,v[i]+f(i+1,false),((i+1<v.size() ? v[i]+v[i+1]+f(i+2,false) : v[i]+f(i+1,false)))});
    }
    else  ans=min({ans,f(i+1,true),f(i+2,true)});
    return dp[i][flag]=ans;
}
void gen()
{
    ll n;
    cin>>n;
    memset(dp,-1,sizeof(dp));
    v.clear();
    v.resize(n);
    for(ll i=0;i<n;i++) cin>>v[i];
    cout<<f(0,true)<<'\n';
}
signed main()
{
    god_speed
    ll t;
    cin>>t;
    while(t--) 	gen();
    return 0;
}