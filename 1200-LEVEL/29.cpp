#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll gcd(ll a, ll b){if (b == 0)return a;return gcd(b, a % b);}
ll lcm(ll a, ll b){return ((a/gcd(a,b))*b);}
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(),v.rend()
#define f first
#define s second
#define FOR for(auto&i:v) cin>>i;
#define rep2(a,b) for(ll i=a;i>=b;i--)
bool odd(ll num) { return ((num & 1) == 1); }
bool even(ll num) { return ((num & 1) == 0); }
void solve()
{
    ll n,k;
    cin>>n>>k;
    if(n%2==0)
    {
        if(k%n==0) {cout<<n<<'\n';}
        else {cout<<k%n<<'\n';}
    }
    else
    {
        ll meet=(k-1)/(n/2);
        if((meet+k)%n==0) cout<<n<<'\n';
        else cout<<(meet+k)%n<<'\n';
    }
}
signed main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
    solve();
    }
    return 0;
}