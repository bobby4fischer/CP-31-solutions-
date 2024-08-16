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
    ll n, s;
    cin>>n>>s;
    vector<ll>v(n+1);
    vector<ll>pre(n+1,0);
    for(ll i=1;i<n+1;i++)
    {
        cin>>v[i];
        pre[i]=pre[i-1]+v[i];
    }
    if(pre[n]<s) cout<<-1<<'\n';
    else if(s==pre[n]) cout<<0<<'\n';
    else
    {
        ll ans=LLONG_MAX;
        for(ll i=1;i<=n;i++)
        {
            ll curr=pre[i-1]+s;
            if(pre[n]<curr) continue;
            else
            {
                auto it=upper_bound(all(pre),curr);
                it--;
                ll dist=(it-pre.begin());
                ans=min(ans,(n-(dist-i+1ll)));
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