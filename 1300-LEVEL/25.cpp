#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll gcd(ll a, ll b){if (b == 0)return a;return gcd(b, a % b);}
ll lcm(ll a, ll b){return ((a/gcd(a,b))*b);}
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(),v.rend()
#define f first
#define s second
#define FOR for(auto&i:b) cin>>i;
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
    int n;
    cin>>n;
    vector<int>a(n);
    for(auto &i:a) cin>>i;
    vector<int>b(n);
    for(auto &i:b) cin>>i;
    int ans=0;
    vector<int>pos(n);
    for(int i=0;i<n;i++) pos[b[i]]=i;
    vector<int>c(n);
    for(int i=0;i<n;i++) c[i]=pos[a[i]];
    int val=c[0];
    for(int i=1;i<n;i++)
    {
        if(val<c[i]) {val=c[i];}
        else ans++;
    }
    cout<<ans<<'\n';
}