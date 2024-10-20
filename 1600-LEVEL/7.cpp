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
    ll n;
    cin>>n;
    ll ans=n*n;
    ll idx=ceil(((sqrt(1LL+8LL*n)-1LL)/2LL)*1.0)-1;
    ll l_f=(n-idx-1),l_e=(n-idx);
    while(idx>=1)
    {
        ll i=(idx*(idx-1LL))/2LL+1;
        ll j=(idx*(idx+1LL))/2LL;
        for(ll k=max(i,l_f);k<=min(l_e,j);k++) ans+=(k*k);
        idx--;
        l_f=(l_f-idx-1);
        l_e=(l_e-idx);
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