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
    ll n;
    cin>>n;
    map<ll,vector<ll>>mp;
    for(ll i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        mp[x].push_back(i);
    }
    vector<ll>ans(n,-1);
    for(auto &it:mp)
    {
        vector<ll>v(all(it.s));
        ll val=it.f; 
        ll diff=-1;  
        diff=max(v[0]+1,n-v[v.size()-1]); 
        for(ll j=1;j<v.size();j++) diff=max(diff,v[j]-v[j-1]);
        for(ll j=diff;j<=n;j++)
        {
            if(ans[j-1]!=-1) break;
            else ans[j-1]=val;
        }
    }
    for(auto &i:ans) cout<<((i==-1)?-1:i)<<" ";
    cout<<'\n';
}
signed main()
{
    god_speed
    ll t;
    cin>>t;
    while(t--) 	gen();
    return 0;
}