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
const ll N=998244353LL;
ll fact(ll n)
{
    ll temp=1;
    for(ll i=1;i<=n;i++)
    {
        temp=((temp%N)*(i%N))%N;
    }
    return temp;
}
void solve()
{
    string s;
    cin>>s;
    ll ans=0,op=0,temp=1;
    char val=s[0];
    for(ll i=0;i<s.size();)
    {
        ll res=0;
        while(i<s.size() && s[i]==val)
        {
            i++;
            res++;
        }
        op+=res-1;
        temp = (temp%N*res%N)%N;
        val=s[i];
    }
    ans+=fact(op);
    ans=((temp%N)*(ans%N))%N;
    cout<<op<<" "<<ans<<'\n';
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