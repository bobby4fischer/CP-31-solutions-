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
vector<ll>v1,v2;
vector<vector<ll>>dp;
ll f(ll i, bool flag)
{
    if(i>=v1.size()) return 0;
    if(dp[i][flag] != -1) return dp[i][flag];

    ll ht=INT_MIN;
    if(flag) ht=max(ht,max(f(i+1,true),v1[i]+f(i+1,false)));
    else ht=max(ht,max(f(i+1,false),v2[i]+f(i+1,true)));
    return dp[i][flag] = ht;
}
void gen()
{
    ll n;
    cin>>n;
    dp.resize(n, vector<ll>(2, -1));
    for(int i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        v1.push_back(x);
    }
    for(int i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        v2.push_back(x);
    }
    ll result = max(f(0,1), f(0,0));
    cout << result << endl;
}
signed main()
{
    god_speed
    ll t=1;
    while(t--)  gen();
    return 0;
}