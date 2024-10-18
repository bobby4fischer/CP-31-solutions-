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
    vector<pair<ll,ll>>v(m);
    for(ll i=0;i<m;i++)
    {
        ll l,r;
        cin>>l>>r;
        v[i].f=l-1;
        v[i].s=r-1;
    }
    ll q;
    cin>>q;
    vector<ll>changes(q);
    for(auto &i:changes) {cin>>i;i--;}
    ll i=0,j=q+10;
    ll ans=LLONG_MAX;
    while(i<=j)
    {
        ll mid=(i+j)/2;
        vector<ll>cur(n,0);
        for(ll i=0;i<min(mid,q);i++) cur[changes[i]]=1;
        // for(auto x:cur) cout<<x<<" ";
        // cout<<'\n';
        vector<ll>pre(n+1,0);
        for(ll i=0;i<n;i++)  pre[i+1]=pre[i]+cur[i];
        bool ok=false;
        for(auto &it: v) 
        {
            ll req=(it.s-it.f+1)/2+1;
            if(pre[it.s+1]-pre[it.f]>=req) 
            {
                ok=true;
                ans=min(ans,mid);
                break;
            }
        }
        if(ok) j=mid-1;
        else  i=mid+1;
    }
    cout<<((j!=q+10) ? ans: -1)<<'\n';
}
signed main()
{
    god_speed
    ll t;
    cin>>t;
    while(t--) 	gen();
    return 0;
}