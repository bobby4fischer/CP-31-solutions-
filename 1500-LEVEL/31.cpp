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
    ll n,q;
    cin>>n>>q;
    vector<ll>v(n+1);
    for(ll i=1;i<=n;i++) cin>>v[i];
    sort(rall(v));
    ll res=0;
    vector<ll>ans(n+1,0);
    while(q--)
    {
        ll x,y;
        cin>>x>>y;
        ans[x]++;
        if(y<=n-1) ans[y+1]--;
    }
    for(ll i=1;i<=n;i++) ans[i]+=ans[i-1];
    sort(rall(ans));
    for(ll i=0;i<=n;i++)  res+=(ans[i]*v[i]);
    cout<<res<<'\n';
}
signed main()
{
    god_speed
    ll t=1;
    //cin>>t;
    while(t--) 	gen();
    return 0;
}