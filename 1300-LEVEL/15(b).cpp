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
    ll n;
    cin >> n;
    vector<pair<ll,ll>> a(n);
    for(ll i = 0; i < n; i++) {
        ll x;
        cin >> x;
        ll maxi=0;
        for(ll j = 0; j < x; j++)
        {
            ll y;
            cin>>y;
            maxi=max(maxi,y-j);
        }
        a.push_back({maxi,x});
    }

    sort(all(a));
    ll ans=LLONG_MAX;
    ll x=0,k=0;
    for(int i=0;i<a.size();i++)
    {
        k = max(a[i].f-x,k),x+=a[i].s;
    }
    cout<<k+1<<'\n';
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
    