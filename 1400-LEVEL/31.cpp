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
const ll MOD = 1000000007;
ll k,n;
ll dp[2005][2005];
ll prefix[2005];
void gen()
{
    cin>>n>>k;
    for(ll x=1;x<=n;x++) dp[1][x] = 1;
    for(ll i = 2; i <= k;i++) 
    {
        fill(prefix, prefix + n + 1, 0);
        for(ll x=1;x<=n;x++) 
        {
            for(ll mult = x; mult <= n; mult += x)  prefix[mult] = (prefix[mult] + dp[i-1][x]) % MOD;
        }
        for(ll x=1; x<=n;x++)  dp[i][x] = prefix[x];
    }
    ll result = 0;
    for(ll x=1;x<=n;x++) result = (result + dp[k][x]) % MOD;
    cout<<result;
}
signed main()
{
    god_speed
    ll t=1;
    //cin>>t;
    while(t--)
    {
    gen();
    }
    return 0;
}