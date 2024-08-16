#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll gcd(ll a, ll b){if (b == 0)return a;return gcd(b, a % b);}
ll lcm(ll a, ll b){return ((a/gcd(a,b))*b);}
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(),v.rend()
#define f first
#define s second
#define rep1(a,b,n) for(ll i=a;i<b;i+=n--)
#define rep2(a,b) for(ll i=a;i>=b;i--)
bool odd(ll num) { return ((num & 1) == 1); }
bool even(ll num) { return ((num & 1) == 0); }
void solve()
{
    int n;
    cin>>n;
    ll m=(n*(n-1))/2LL;
    vector<ll>v(m);
    for(auto &i:v) cin>>i;
    sort(all(v));
    n--;
    for(ll i=0;i<m;i+=n--)   cout<<v[i]<<" ";
    //last value reamains
    cout<<1000000000<<'\n';
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
    solve();
    }
    return 0;
}