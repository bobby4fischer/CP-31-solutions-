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
    vector<ll>v(n);
    FOR(v);
    sort(all(v));
    ll sum=accumulate(all(v),0LL);
    cout<<((sum%2==0 and v[n-1]<=sum) ? "YES" : "NO");
}
signed main()
{
    god_speed
    ll t=1;
    //cin>>t;
    while(t--) 	gen();
    return 0;
}