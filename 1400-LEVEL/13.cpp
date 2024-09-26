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
    ll n,k;
    cin>>n>>k;
    vector<ll>v(n);
    FOR(v);
    vector<ll>ans(n,0);
    for(ll i=0;i<n-1;i++)
    {
        if(v[i]>=v[i+1]*2LL) ans[i]--;
    }
    ll res=0;
    ll idx=0;
    for(ll i=0;i<n;)
    {
        if(ans[i]==0)
        {
            while(i<n && ans[i]==0) i++;
            if(idx+k<=min(i,n-1LL)) res+=(min(i,n-1LL)-(idx+k)+1LL);
        }
        else
        {
           while(i<n && ans[i]==-1) i++;
           idx=i;
        }
    }
    cout<<res<<'\n';
}
signed main()
{
    god_speed
    ll t;
    cin>>t;
    while(t--) 	gen();
    return 0;
}