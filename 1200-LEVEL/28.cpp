#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll gcd(ll a, ll b){if (b == 0)return a;return gcd(b, a % b);}
ll lcm(ll a, ll b){return ((a/gcd(a,b))*b);}
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(),v.rend()
#define f first
#define s second
#define FOR for(auto&i:v) cin>>i;
#define rep2(a,b) for(ll i=a;i>=b;i--)
bool odd(ll num) { return ((num & 1) == 1); }
bool even(ll num) { return ((num & 1) == 0); }
void solve()
{
    ll n,m;
    cin>>n>>m;
    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        mp[x%m]++;
    }
    ll ans=0;
    for(auto &it:mp)
    {
        if(it.f==0) ans++;
        else if(it.f*2==m) ans++;
        else if(mp.find(m - it.f)!=mp.end())
        {
            if(it.s!=0 && mp[m - it.f]!=0)
            {
                int x = it.s, y = mp[m-it.f];
                ans += 1 + max(0, abs(x - y) - 1);
            }
            mp[m-it.f]=0;
        }
        else if(mp.find(m - it.f)==mp.end() && it.s!=0) ans+=it.s; 
    }
    cout<<ans<<'\n';
}
signed main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
    solve();
    }
    return 0;
}