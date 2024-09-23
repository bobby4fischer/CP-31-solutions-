#include<bits/stdc++.h>
#define god_speed      ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);
using namespace std;
#define ll  long long
ll gcd(ll a, ll b){if (b == 0)return a;return gcd(b, a % b);} ll lcm(ll a, ll b){return ((a/gcd(a,b))*b);}
#define all(v) v.begin(), v.end() 
#define rall(v) v.rbegin(),v.rend()
#define f    first
#define s    second
#define FOR(v) for(auto&i:v) cin>>i;
void gen()
{
    ll a,b,k;
    cin>>a>>b>>k;
    vector<ll>boy(a),girl(b);
    vector<pair<ll,ll>>p(k);
    for(ll i=0;i<k;i++) cin>>p[i].first;
    for(ll i=0;i<k;i++) cin>>p[i].second;
    for(auto &m:p) 
    {
        m.first--;
        m.second--;
        boy[m.first]++;
        girl[m.second]++;
    }
  ll ans = 0LL;
  for(auto &n:p)  ans+= k-boy[n.first]-girl[n.second]+1LL;
  cout<<ans/2<<'\n';
}
signed main()
{
    god_speed
    ll t;
    cin>>t;
    while(t--) 	gen();
    return 0;
}