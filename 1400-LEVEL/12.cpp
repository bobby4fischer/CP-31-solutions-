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
    vector<ll>v(n+1,0);
    for(ll i=1;i<=m;i++)
    {
        ll x;
        cin>>x;
        v[x]++;
    }
    ll i=0,j=2*m;
    ll ans=2*m;
    while(i<=j)
    {
        ll mid=(i+j)/2LL;
        ll rem=0,avl=0;
        for(int i=1;i<=n;i++)
        {
            rem+=v[i]-(ll)min(mid,v[i]);
            avl+=(mid-(ll)min(mid,v[i]))/2;
        }

        if(rem<=avl)
        {
            ans=min(ans,mid);
            j=mid-1;
        }
        else i=mid+1;
    }
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