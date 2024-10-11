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
    vector<ll>x,y; 
    ll t=n;
    while(t--)
    {
        ll i,j;
        cin>>i>>j;
        x.emplace_back(i);
        y.emplace_back(j);
    }
    if(n%2) cout<<1<<'\n';
    else
    {
        sort(all(x));sort(all(y));
        cout<<(x[n/2]-x[n/2-1]+1)*(y[n/2]-y[n/2-1]+1)<<'\n';
    }
}
signed main()
{
    god_speed
    ll t;
    cin>>t;
    while(t--) 	gen();
    return 0;
}