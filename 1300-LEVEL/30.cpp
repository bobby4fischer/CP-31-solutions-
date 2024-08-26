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
    
}
signed main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    ll sum=0,ans=0;
    for(auto &i:v) {cin>>i;}
    for(int i=0;i<k;i++) sum+=v[i];
    ans+=sum;
    for(ll i=1;i<n-k+1;i++) 
    {
        sum-=v[i-1]; 
        sum+=v[i+k-1];
        ans+=sum;
    }
    ll week=n-k+1;
    double val=((ans*1.0)/(week*1.0));
    printf("%.10f\n",val);
}