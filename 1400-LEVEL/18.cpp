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
const ll MOD=1000000007;
ll fact(ll n)
{
    if(n==0||n==1) return 1;
    return ((n%MOD)*(fact(n-1)%MOD))%MOD;
}
ll nPr(ll n, ll r) 
{
    if (r>n) return 0;  // If r is greater than n, return 0
    return fact(n)/fact(n-r);  // nPr = n! / (n - r)!
}
void gen()
{
    ll n;
    cin>>n;
    vector<ll>v(n);
    FOR(v);
    ll val=v[0];
    for(ll i=1;i<n;i++) val&=v[i];
    ll free=0;
    for(auto &x:v) if(x==val) free++;

    if(free<2) cout<<0LL<<'\n';
    else
    {
        // ll ans=((free%MOD)*((free-1)%MOD))%MOD;
        // ans=((ans%MOD)*(fact(n-2)%MOD))%MOD;

                        //(OR)

        ll ans=((fact(n-2)%MOD)*(nPr(free,2LL)%MOD))%MOD;
        cout<<ans<<'\n';
    }
}
signed main()
{
    god_speed
    ll t;
    cin>>t;
    while(t--) 	gen();
    return 0;
}