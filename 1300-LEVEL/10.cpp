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
    vector<ll>v(n+1);
    for(int i=1;i<=n;i++) cin>>v[i];
    vector<ll>ans;
    ll res=0;
    for(int i=1;i<=n;i++)
    {
        if(v[i]>=i) continue;
        res += (long long)(lower_bound(ans.begin(), ans.end(), v[i]) - ans.begin());
        ans.push_back(i);
    }
    cout<<res<<'\n';
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