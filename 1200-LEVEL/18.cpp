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
    FOR;
    if(v[v.size()-1]<v[v.size()-2]) {cout<<-1<<'\n';return;}
    else if(v[v.size()-1]<0) {(is_sorted(all(v))?cout<<0 : cout<<-1);cout<<'\n';return;}
    else
    {
        cout<<n-2<<'\n';
        for(ll i=0;i<n-2;i++)
        {
            cout<<i+1<<" "<<n-1<<" "<<n<<'\n';
        }
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