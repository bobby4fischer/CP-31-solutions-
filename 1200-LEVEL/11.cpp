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
    string s;
    cin>>s;
    string m(n,'1');
    ll ans=0;
    for(ll i=0;i<n;i++)
    {
        if(s[i]=='0')
        {
            for(ll j=i+1;j<=n;j+=(i+1))
            {
                if(s[j-1]=='1') break;
                if(m[j-1]=='0') continue;
                m[j-1]='0';
                ans+=i+1;
            }
        }
    }
    cout<<ans<<'\n';
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