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
const int N=1e6;
void solve()
{
    int n;
    cin>>n;
    if(n%2==0)  cout<<n/2<<" "<<n/2<<'\n';
    else
    {
        int p = 0;
        for(int m = 2; m <= 100000; ++m) {
            if (n % m == 0) {
                p = m;
                break;
            }
        }
        if(p == 0)  p = n;
        cout<<n/p<<" "<<n-(n / p)<<'\n';
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