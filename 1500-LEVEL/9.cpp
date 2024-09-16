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
    ll n;
    cin>>n;
    vector<ll>fac(17);                 
    fac[0] = 1;
    for(int i=1;i<=16;i++)   fac[i]=fac[i-1]*i;
    ll ans=INT_MAX;
    for(ll s=0; s<(1LL<<14);s++) 
    {
        ll m=n; 
        for(ll i=0;i<14;i++) 
        {
            if (s>>i & 1)  m -= fac[i+1];
        }
        if (m >= 0) ans=min<ll>(ans, __builtin_popcount(s) + __builtin_popcountll(m));
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