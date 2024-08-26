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
    ll a=-1,b=-1;
    for(ll i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            a=i;
            n/=i;
            break;
        }
    }
    for(ll i=2;i*i<=n;i++)
    {
        if(n%i==0 && i!=a)
        {
            b=i;
            n/=b;
            break;
        }
    }
    if(n==1 ||  a==-1  ||  b==-1 || a==b ||b==n || a==n) cout<<"NO"<<"\n";
    else
    {
        cout<<"YES"<<'\n';
        cout<<a<<" "<<b<<" "<<n<<'\n';
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