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
    ll c5_1=0,c2_1=0;
    ll t=n;
    while(t%5==0) {c5_1++;t/=5;}
    while(t%2==0) {c2_1++;t/=2;} 
    ll s=1LL;
    while(c5_1<c2_1 && s*5LL<=m) {c5_1++;s*=5LL;}
    while(c2_1<c5_1 && s*2LL<=m) { c2_1++; s*=2LL; }
    m/=s;
    ll ans=1LL;
    while(m>=10LL) {m/=10LL;ans*=10LL;}
    m*=ans;
    cout<<m*s*n<<'\n';
}
signed main()
{
    god_speed
    ll t;
    cin>>t;
    while(t--) 	gen();
    return 0;
}