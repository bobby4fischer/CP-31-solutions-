#include<bits/stdc++.h>
#define god_speed      ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);
using namespace std;
#define ll  long long
ll gcd(ll a, ll b){if (b == 0)return a;return gcd(b, a % b);} ll lcm(ll a, ll b){return ((a/gcd(a,b))*b);}
#define all(v) v.begin(), v.end() 
#define rall(v) v.rbegin(),v.rend()
#define f    first
#define s    second
#define FOR(v) for(auto&i:v) cin>>i;
void gen()
{
    ll n,k;
    cin>>n>>k;
    string s;cin>>s;
    ll ans=n;
    for(ll i=0;i<=k-1-i;i++)
    {
        vector<ll>v(26,0);
        for(ll j=i;j<n;j+=k) v[s[j]-'a']++;
        if(i<k-1-i) for(ll j=k-1-i;j<n;j+=k) v[s[j]-'a']++;
        ll val=*max_element(all(v));
        ans-=val;
    }
    cout<<ans<<'\n';
}
signed main()
{
    god_speed
    ll t;
    cin>>t;
    while(t--) 	gen();
    return 0;
}