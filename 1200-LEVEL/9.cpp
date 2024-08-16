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
    FOR ;
    sort(all(v));
    reverse(all(v));
    vector<pair<ll,ll>>b;
    for(ll i=0;i<n;)
    {
        ll j=i;
        while(i<n && v[j]==v[i]) i++;
        b.push_back({v[j],i-j});
    }
    ll  ans=b[0].s;
    n=b.size();
    for(ll i=1; i<n; i++){
        if(b[i].f+1==b[i-1].f)  ans=ans+max(b[i].s-b[i-1].s, 0ll);
        else  ans=ans+b[i].s;
    }
    cout<<ans<<"\n";
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