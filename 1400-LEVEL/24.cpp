#include<bits/stdc++.h>
#define god_speed      ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);
using namespace std;
#define ll  long long
ll gcd(ll a, ll b){if (b == 0)return a;return gcd(b, a % b);}
ll lcm(ll a, ll b){return ((a/gcd(a,b))*b);}
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(),v.rend()
#define f    first
#define s    second
#define FOR(v) for(auto&i:v) cin>>i;
void gen()
{
    ll n;
    cin>>n;
    vector<ll>v(n);
    FOR(v);
    ll bal=0;
    ll ans=0,cnt1=0,cnt2=0;
    for(ll i=0;i<n;i++)
    {
        if(bal % 2 == 0) cnt1++;
        else cnt2++;
        
        if(v[i] < 0) bal++;
        if(bal % 2 == 0) ans += cnt1;
        else ans += cnt2;
    }
    cout<<(n*n+n)/2-ans<<" "<<ans<<'\n';
}
signed main()
{
    god_speed
    ll t=1;
    //cin>>t;
    while(t--)
    gen();
    return 0;
}