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
    map<pair<ll,ll>,ll>mp;
    vector<ll>A(n),B(n);
    FOR(A);FOR(B);
    ll ans=0;
    for(ll i=0;i<n;i++)
    {
        ll a=A[i],b=B[i];
        if(a)
        {
            ll d=gcd(a,b);
            a/=d;b/=d;
            mp[{a,b}]++;
        }
        else {if(b==0) ans++;}
    }
    ll t=0;
    for(auto &i:mp) t=max(t,i.s);
    cout<<ans+t;
}
signed main()
{
    god_speed
    ll t=1;
    //cin>>t;
    while(t--) 	gen();
    return 0;
}