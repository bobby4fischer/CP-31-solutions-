#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll gcd(ll a, ll b){if (b == 0)return a;return gcd(b, a % b);}
ll lcm(ll a, ll b){return ((a/gcd(a,b))*b);}
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(),v.rend()
#define vll vector<ll>v(n)
#define f first
#define s second
#define FOR(v) for(auto&i:v) cin>>i;
#define rep2(a,b) for(ll i=a;i>=b;i--)
bool odd(ll num) { return ((num & 1) == 1); }
bool even(ll num) { return ((num & 1) == 0); }
void solve()
{
    int n;
    cin>>n;
    vector<int>v(n);
    FOR(v);
    vector<int>ans(32,0);
    for(int i=31;i>=0;i--)
    {
        int cnt=0;
        for(int k=0;k<n;k++)
        {
            if(v[k]&(1<<i)) ans[i]++;
        }
    }
    vector<int>res;
    for(int k=1;k<=n;k++)
    {
        bool flag=true;
        for(int i=0;i<=31;i++)
        {
            if(ans[i]%k!=0)
            {
                flag=false;
                break;
            }
        }
        if(flag) res.push_back(k);
    }
    for(auto x:res) cout<<x<<" ";
    cout<<'\n';

}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
    solve();
    }
    return 0;
}