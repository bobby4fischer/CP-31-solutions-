#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll gcd(ll a, ll b){if (b == 0)return a;return gcd(b, a % b);}
ll lcm(ll a, ll b){return ((a/gcd(a,b))*b);}
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(),v.rend()
#define vll vector<ll>v(n)
#define f first
#define s second
#define FOR(v) for(auto&i:v) cin>>i;
#define rep2(a,b) for(ll i=a;i>=b;i--)
bool odd(ll num) { return ((num & 1) == 1); }
bool even(ll num) { return ((num & 1) == 0); }
void solve()
{
    ll n;
    cin>>n;
    vector<ll>v(n,0);
    for(int i=0;i<2*n;i++)
    {
        int x;
        cin>>x;
        v[i%n]=-x-v[i%n];
    }
    int maxi=*max_element(all(v));
    int c=0;
    for(int i=0;i<n;i++) c+=(v[i]==maxi);
    cout<<c<<"\n";
    for(int i=0;i<n;i++)  if(v[i]==maxi)  cout<<i+1<<' ';
    cout<<"\n";
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
    solve();
    }
    return 0;
}