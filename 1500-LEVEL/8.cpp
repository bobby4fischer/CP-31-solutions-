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
    ll n, s, b;
    cin>>n>>s>>b;
    vector<ll>a(n+1,0);
    for(ll i=1; i<=n; i++) cin>>a[i];
    vector<ll>pre(n+1,0);
    for(ll i=1; i<=n; i++) pre[i]=pre[i-1]+a[i];
    ll ans = LLONG_MAX;
    for(ll i=0; i<=n; i++)
    {
        ll tmp = (s+b)*(a[i]-0);
        ll sd = (pre[n]-pre[i]) - ((n-i)*a[i]);
        tmp += sd*b;
        ans = min(ans, tmp);
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