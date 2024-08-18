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
    set<ll>st;
    for(ll k = 2; k <= 1000; k++) {
        ll val = 1 + k;
        ll p = k*k;
        for(ll cnt = 2; cnt <= 20; ++cnt) {
            val += p;
            if (val > 1e6) break;
            st.insert(val);
            p *= k;
        }
    }
    (st.count(n)>=1) ? cout<<"YES"<<'\n':cout<<"NO"<<'\n';
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