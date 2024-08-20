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
long long get(int x) {
    return x * 1ll * (x + 1) / 2;
}
void solve()
{
    ll k,x;
    cin>>k>>x;
    if(k*k<=x) cout<<2*k-1<<'\n';
    else 
    {
        ll val1=(k*(k+1))/2;
        if(x==val1) cout<<k<<'\n';
        else if(x<val1)
        {
            ll ans1= sqrt(1+(8*x));
            if(ans1*ans1>=(1+8*x)) cout<<(ans1-1)/2<<'\n';
            else cout<<(ans1-1)/2+1<<'\n';            
        }
        else
        {
            ll val2=x-(k*(k+1))/2;
            ll val1=(k*(k-1))/2-val2;
            ll ans1= ((-1)+sqrt(1+(8*val1))) /2;
            cout<<2*k-1-ans1<<'\n';
        }
    }
    
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