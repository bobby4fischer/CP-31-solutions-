#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll gcd(ll a, ll b){if (b == 0)return a;return gcd(b, a % b);}
ll lcm(ll a, ll b){return ((a/gcd(a,b))*b);}
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(),v.rend()
#define f first
#define s second
#define rep1(a,b) for(ll i=a;i<b;i++)
#define rep2(a,b) for(ll i=a;i>=b;i--)
bool odd(ll num) { return ((num & 1) == 1); }
bool even(ll num) { return ((num & 1) == 0); }
void solve()
{
    ll n,x,y;
    cin>>n>>x>>y;
    ll sum=0;
    ll val2=0;
    if(lcm(x,y)<=n) val2=n/lcm(x,y); 
    ll k=(n/x)-val2;
    ll m=(n/y)-val2;
    sum=((k*(2*n+1-k))-(m*(m+1)))/2LL;
    cout<<sum<<'\n';
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