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
    map<ll,ll>mp;
    for(ll i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        mp[(x-(i+1LL))]++;
    }
    ll ans=0;
    for(auto &i:mp)
    {
        if(i.s>=2LL)
        {
            ans+=((i.s)*(i.s-1))/2LL;
        }
    }
    cout<<ans<<'\n';
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