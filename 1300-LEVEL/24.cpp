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
    ll n;
    cin>>n;
    vector<ll>v(n);
    ll sum=0;
    for(auto&i:v) {cin>>i;sum+=i;}
    if(sum<=0) cout<<"NO"<<'\n';
    else
    {
        ll new_sum=INT_MIN,best=0;
        for(int i=0;i<n-1;i++)
        {
            best=max(v[i],best+v[i]);
            new_sum=max(new_sum,best);
        }
        best=0;
        for(int i=n-1;i>0;i--)
        {
            best=max(v[i],best+v[i]);
            new_sum=max(new_sum,best);
        }
        if(new_sum>=sum) cout<<"NO"<<'\n';
        else cout<<"YES"<<'\n';
    }
 
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