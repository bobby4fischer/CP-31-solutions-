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
    ll n;cin>>n;
    vector<ll>x(n);FOR(x);
    vector<ll>t(n);FOR(t);
    vector<ll>a;
    for(ll i=0;i<n;i++) 
    {
        a.push_back(x[i]+t[i]);
        a.push_back(x[i]-t[i]);
    }
    ll mini=*min_element(all(a));
    ll maxi=*max_element(all(a));
    ll sum=mini+maxi;
    printf("%0.5f\n",sum/(2.0));
}
signed main()
{
    god_speed
    ll t;
    cin>>t;
    while(t--) 	gen();
    return 0;
}