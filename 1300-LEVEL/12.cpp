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
    ll n,k;
    cin>>n>>k;
    vector<ll>v(n);
    ll ans=0;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        if(i==0) ans|=v[i];
        else ans&=v[i];
    }
    if(k==0) cout<<ans<<'\n';
    else
    {
        ans=0;
        for(int i=30;i>=0;i--)
        {
            int cnt=0;
            for(int j=0;j<n;j++)
            {
                if(v[j]&(1<<i)) continue;
                else cnt++;
            }
            if(cnt<=k)
            {
                k-=cnt;
                ans+=(1<<i);
            }
        }
        cout<<ans<<'\n';
    }
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