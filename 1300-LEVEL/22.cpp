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
    if(k>=n) cout<<1<<'\n';
    else
    {
        ll ans=INT_MAX;
        for(ll j=1;j*j<=n;j++)
        {
            if(n%j==0)
            {
                if(j<=k)  ans=min(ans,n/j);
                if(n/j<=k) ans=min(ans,j);
            }
        }
        cout<<ans<<'\n';
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