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
    ll n;cin>>n;
    vector<ll>v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    int q;cin>>q;
    vector<ll>p(n,-1);
    for(int i=1;i<n;i++) 
    {
        p[i]=p[i-1];
        if(v[i]!=v[i-1]) p[i]=i-1;
    }
    while(q--)
    {
        int l,r;cin>>l>>r;
        l--;r--;
        if(p[r]<l) cout<<-1<<" "<<-1<<'\n';
        else cout<<p[r]+1<<" "<<r+1<<'\n';
    }
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