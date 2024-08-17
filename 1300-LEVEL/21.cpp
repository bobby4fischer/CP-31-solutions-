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
    ll n;
    cin>>n;
    vector<ll>v(n);
    FOR;
    vector<ll>ans;
    ll i=0,j=n-1;
    for(int i=0;i<n;i++)
    {
        if(i==0||i==n-1) ans.push_back(v[i]);
        else if(v[i-1]<v[i] && v[i]>v[i+1]) ans.push_back(v[i]);
        else if(v[i-1]>v[i] && v[i]<v[i+1]) ans.push_back(v[i]);
    }
    cout<<ans.size()<<'\n';
    for(auto ele :ans) cout<<ele<<" ";
    cout<<'\n';
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