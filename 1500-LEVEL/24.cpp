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
bool cmp(pair<pair<ll,ll>,ll>&a,pair<pair<ll,ll>,ll>&b)
{
    if(a.f.f==b.f.f) return a.f.s<b.f.s;
    return a.f.f<b.f.f;
}
void gen()
{
    ll n;
    cin>>n;
    vector<pair<pair<ll,ll>,ll>>v(n);
    for(ll i=0;i<n;i++) 
    {
        cin>>v[i].f.f>>v[i].f.s;
        v[i].s=i;
    }
    sort(all(v),cmp);
    vector<ll>ans(n,2);
    ans[v[0].s]=1;
    bool ok=false;
    ll maxi=v[0].f.s;
    for(ll i=1;i<n;i++)
    {
      if(v[i].f.f > maxi) { ok=true;break; }
      maxi=max(maxi,v[i].f.s);
      ans[v[i].s]=1;
    }
    if(ok)
    {
        for(auto &x:ans) cout<<x<<" ";
        cout<<'\n';
    }
    else cout<<-1<<'\n';
}
signed main()
{
    god_speed
    ll t;
    cin>>t;
    while(t--) 	gen();
    return 0;
}