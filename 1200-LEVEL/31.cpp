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
    ll arr[32]={0};
    for(ll i=0;i<n;i++)
    {
        ll c=0;
        while(v[i]/2>=1)
        {
            v[i]/=2;
            c++;
        }
        arr[c]++;
    }
    ll ans=0;
    for(int i=0;i<32;i++)
    {
        if(arr[i]>=2)
        {
            ans+=(arr[i]*(arr[i]-1))/2;
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