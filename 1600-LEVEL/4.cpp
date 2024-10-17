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
bool f(ll goal,vector<ll>&v,ll K)
{
    for(ll i=0;i<v.size();i++) 
    {
        ll have=K;
        for(ll j=i;j<v.size();j++) 
        {
            ll required=goal-(j - i);
            if(v[j]>=required) return true;
            ll need = max(required - v[j], 0LL);
            if(have<need) break;
            have-=need;
        }
    }
    return false;
}
void gen()
{
    ll n,k;
    cin>>n>>k;
    vector<ll>v(n);
    FOR(v);
    ll i=0,j=1000000100;
    while(i<=j) 
    {
        ll mid =(i+j)/2LL;
        if(f(mid,v,k)) i=mid+1;
        else  j=mid-1;
    }
    cout<<j<<'\n';
}
signed main()
{
    god_speed
    ll t;
    cin>>t;
    while(t--) 	gen();
    return 0;
}