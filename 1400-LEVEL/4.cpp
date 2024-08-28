#include<bits/stdc++.h>
#define god_speed      ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);
using namespace std;
#define ll        long long
ll gcd(ll a, ll b){if (b == 0)return a;return gcd(b, a % b);}
ll lcm(ll a, ll b){return ((a/gcd(a,b))*b);}
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(),v.rend()
#define vll vector<ll>v(n)
#define f    first
#define s    second
#define FOR(v) for(auto&i:v) cin>>i;
#define rep2(a,b) for(ll i=a;i>=b;i--)
bool odd(ll num) { return ((num & 1) == 1); }
bool even(ll num) { return ((num & 1) == 0); }
void gen()
{
    ll n,k;
    cin>>n>>k;
    vector<ll>v(n);
    FOR(v);
    if(k>=3) cout<<0<<'\n';
    else
    {
        sort(all(v));
        ll mini = v[0];
        for (ll i = 0; i < n - 1; i++) mini = min(mini, v[i + 1] - v[i]);
        bool flag=true;
        if(k == 1) {flag=false;cout<<mini<<'\n';}
        for(ll i = 0; i < n; i++) 
        {
            for(ll j = 0; j < i; j++) 
            {
                ll a = v[i] - v[j];
                ll p = lower_bound(all(v),a)-v.begin();
                if (p < n) mini = min(mini, v[p] - a);
                if (p > 0) mini = min(mini, a - v[p - 1]);
            }
        }
        if(flag) cout<<mini<<'\n';
    }
}
signed main()
{
    god_speed
    ll t;
    cin>>t;
    while(t--)
    {
    gen();
    }
    return 0;
}