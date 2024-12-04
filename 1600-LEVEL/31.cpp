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
    vector<ll>v(n);
    FOR(v);
    ll val=1;
    if(n>m) {cout<<0<<'\n';return;}
    for(ll i=0;i<n;i++)
    {
        for(ll j=i+1;j<n;j++)  val=(val%m*(abs(v[j]-v[i])%m)%m)%m;
    }
    cout<<val%m<<'\n';
}
signed main()
{
    god_speed
    ll t=1;
    while(t--) 	gen();
    return 0;
}