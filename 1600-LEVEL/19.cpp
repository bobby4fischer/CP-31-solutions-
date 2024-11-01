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
vector<pair<ll,ll>>v;
bool f(ll mid,ll n)
{
    ll j=0;
    bool ok=true;
    for(ll i=1;i<=mid;i++)
    {
        while(j<n && (v[j].f<mid-i || v[j].s<i-1)) j++;
        if(j==n)
        {
            ok=false;
            break;
        }
        j++;
    }
    return ok;
}
void gen()
{
    ll n;cin>>n;
    v.resize(n+1);
    for(ll i=0;i<n;i++)
    {
        ll x,y;
        cin>>x>>y;
        v[i]={x,y};
    }
    ll i=0,j=n+5;
    while(i<=j)
    {
        ll mid=(i+j)/2;
        if(f(mid,n)) i=mid+1;
        else j=mid-1;
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