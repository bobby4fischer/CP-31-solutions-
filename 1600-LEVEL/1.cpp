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
    vector<ll>v(n+1);
    for(ll i=1;i<=n;i++) cin>>v[i];
    ll ans=0;
    for(ll i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            ll val=0;
            for(ll o=1;o<=n-i;o++) val=gcd(val,abs(v[o+i]-v[o]));
            ans+=(val!=1); 
        }
    }
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