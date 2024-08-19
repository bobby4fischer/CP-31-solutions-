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
    vector<ll>v(n);
    FOR(v);
    vector<ll>res;
    res.push_back(1);
    for(ll i=1; i<n; i++) 
    {
        ll L=0,R=i;
        ll ans = INT_MIN;
        while(L <= R)
        {
            ll mid = (L + R) / 2;
            if (v[mid] >=i - mid + 1)
            {
                ans = mid;
                R = mid - 1;
            }
            else   L = mid + 1;
        }
        res.push_back(i-ans+1);
    }
        for(auto ele:res) cout<<ele<<" ";
        cout<<'\n';

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