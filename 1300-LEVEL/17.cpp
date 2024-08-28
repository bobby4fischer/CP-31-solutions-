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
    ll n,m;
    cin>>n>>m;
    vector<ll>assigned(n),pre_cost(m);
    FOR(assigned);
    FOR(pre_cost);
    ll cost=0;
    sort(rall(assigned));
    ll i=0;
    for(auto x:assigned) cost+=pre_cost[x-1];
    ll val=cost;
    for(ll i = 0; i < min(n, m); ++i) 
    {
      val -= pre_cost[assigned[i] - 1];
      val += pre_cost[i];
      cost = min(cost, val);
    }
    cout<<cost<<'\n';
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