#include<bits/stdc++.h>
#define god_speed      ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);
using namespace std;
#define ll        long long
ll gcd(ll a, ll b){if (b == 0)return a;return gcd(b, a % b);}
ll lcm(ll a, ll b){return ((a/gcd(a,b))*b);}
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(),v.rend()
#define vll vector<ll>v(n)
#define f    first
#define s    second
#define FOR(v) for(auto&i:v) cin>>i;
#define rep2(a,b) for(ll i=a;i>=b;i--)
bool odd(ll num) { return ((num & 1) == 1); }
bool even(ll num) { return ((num & 1) == 0); }
void gen()
{
    ll n;
    cin>>n;
    vector<ll>a(n);
    FOR(a);
    vector<ll>b(n);
    FOR(b);
    vector<ll>pre(n+1,0);
    for(int i=1;i<=n;i++) pre[i]+=pre[i-1]+b[i-1];
    vector<ll>cnt(n+1),add(n+1);
    for (int i = 0; i < n; ++i) 
    {
      int j = upper_bound(all(pre), a[i] + pre[i]) - pre.begin() - 1;
      cnt[i] += 1;
      cnt[j] -= 1;
      add[j] += a[i] - pre[j] + pre[i];
    }
    for (int i = 0; i < n; ++i) 
    {
      cout << cnt[i] * b[i] + add[i] << ' ';
      cnt[i + 1] += cnt[i];   
    }
    cout<<'\n';
}
signed main()
{
    god_speed
    ll t;
    cin>>t;
    while(t--)
    {
    gen();
    }
    return 0;
}