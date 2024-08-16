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
    ll n,k;
    cin>>n>>k;
    vector<vector<int>>v(k+1);
    for(int i=1;i<=k;i++)  v[i].push_back(0);
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        v[x].push_back(i);
    }
    for(int i=1;i<=k;i++)  v[i].push_back(n+1);
    int ans=n+1;
    for(int i=1;i<=k;i++)
    {
        int z1=-1,z2=-1;
        for(int j=1;j<v[i].size();j++)
        {
            int a1=v[i][j]-v[i][j-1]-1;
            if(a1>=z2 && a1<=z1) z2=a1;
            else if(a1>=z1) {z2=z1;z1=a1;}
        }
        ans=min(ans,max(z1/2,z2));
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