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
    ll n,m;
    cin>>n>>m;
    vector<ll>v(n+1,n);
    for(ll i=1;i<=m;i++)
    {
        ll x,y;
        cin>>x>>y;
        if(x>y) swap(x,y);
        v[x]=min(v[x],y-1);
    }
    ll idx=n-1;
    ll ans=n;
    while(idx--) v[idx]=min(v[idx],v[idx+1]);
    for(ll i=1;i<=n;i++) ans+=v[i]-i;
    cout<<ans<<'\n';
}
signed main()
{
    god_speed
    ll t;
    cin>>t;
    while(t--) 	gen();
    return 0;
}