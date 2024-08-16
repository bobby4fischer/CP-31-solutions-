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
    ll n,q;
    cin>>n>>q;
    vector<ll> v(n);
    FOR;
    vector<pair<ll,ll>> p(q);
    vector<ll> ans(q);
    ll sum=0;
    for(ll i=0;i<q;i++)
    {
        cin>>p[i].first;
        p[i].second=i;
    }
    sort(all(p));
    ll ind=0;
    for(ll i=0;i<q;i++){
        while(ind<n && v[ind]<=p[i].first){
            sum+=v[ind];
            ind++;
        }
        ans[p[i].second]=sum;
    }
    for(auto x:ans) cout<<x<<" ";
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