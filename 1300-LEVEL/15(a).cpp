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
    vector<vector<ll>> a(n);
    for(ll i = 0; i < n; i++) {
        ll x;
        cin >> x;
        a[i].resize(x);
        for(ll j = 0; j < x; j++) cin >> a[i][j];
    }
 
    vector<ll> costi(n);
    priority_queue<pair<ll,ll>, vector<pair<ll,ll>>, greater<pair<ll,ll>>> pq;
    for(ll i = 0; i < n; i++) {
        ll cost = 0;
        for(ll j = 0; j < a[i].size(); j++) cost = max(cost, (a[i][j] - j + 1));
        costi[i] = cost;
        pq.push({costi[i], i});
    }
    ll ans = 0,curr = 0;
    while(!pq.empty()) 
    {
        pair<ll,ll> p = pq.top();
        pq.pop();
        if(curr < p.first) {
            ans += (p.first - curr);
            curr += (p.first - curr);
        }
        curr += a[p.second].size();
    }
    cout<<ans<<'\n';
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