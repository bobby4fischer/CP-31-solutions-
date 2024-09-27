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
    for(auto &x:v) {if(x%2) x+=x%10;}
    ll c5=0;
    for(auto &x:v) {if(x%5==0) c5++;}
    sort(all(v));
    if(c5) {cout<<(v[0]==v[n-1] ? "Yes" : "No")<<'\n';return;}
    for(auto &x:v)
    {
        while(x%10 != 2) x+=x%10;
    }
    for(ll i=0;i<n;i++) { if(v[i] % 20 != v[0] % 20) {cout<<"No"<<'\n';return;} }
    cout<<"Yes"<<'\n';
}
signed main()
{
    god_speed
    ll t;
    cin>>t;
    while(t--) 	gen();
    return 0;
}