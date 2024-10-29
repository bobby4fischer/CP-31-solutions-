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
    ll n;cin>>n;
    vector<ll>v(n+1);
    for(ll i=1;i<=n;i++) cin>>v[i];
    vector<bool>dp(n+1,false);
    dp[0]=true;
    for(ll i=1;i<=n;i++) 
    {
        if(i+v[i]<=n && dp[i-1]) dp[i + v[i]] = true;
        if(i-v[i]>0 && dp[i-v[i]-1]) dp[i] = true;
    }
    cout<<(dp[n] ? "YES" : "NO")<<'\n';
}
signed main()
{
    god_speed
    ll t;
    cin>>t;
    while(t--) 	gen();
    return 0;
}