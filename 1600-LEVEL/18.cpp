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
vector<ll>dp,c,ans;
vector<vector<ll>>final;
// ll f(ll i,ll k)
// {
//     if(i>=c.size()) return 0;
//     if(k<=0) return 0;
//     if(final[i][k]!=-1) return final[i][k];
//     ll res=LLONG_MIN;
//     res=max(f(i+1,k),res);
//     res=max(res,((k-ans[i]>=0) ? c[i]+f(i+1,k-ans[i]) : 0));
//     return final[i][k]=res;
// }
void gen()
{
    ll n,k;cin>>n>>k;
    ans.resize(n);c.resize(n);
    // final.resize(10000,vector<ll>(10000,-1));
    for(ll i=0;i<n;i++)
    {
        ll x;cin>>x;
        ans[i]=dp[x];
    }
    ll sum=accumulate(all(ans),0LL);
    k=min(k,sum);
    FOR(c);
    vector<ll> res(k+1,0);
    for(ll i=0;i<n;i++) 
    {
      for(ll j=k-ans[i];j>=0;j--)  res[j+ans[i]] = max(res[j+ans[i]],res[j]+c[i]);
    }
    cout<<*max_element(all(res))<<'\n';
}
signed main()
{
    god_speed
    dp.resize(1005,1005);
    dp[1]=0;
    for(ll i=1;i<1005;i++)
    {
        for(ll j=1;j<=i;j++)
        {
            ll val=i+i/j;
            if(val<1005) dp[val]=min(dp[val],dp[i]+1);
        }
    }
    ll t;cin>>t;
    while(t--) 	gen();
    return 0;
}