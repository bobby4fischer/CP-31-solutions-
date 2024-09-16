#include<bits/stdc++.h>
#define god_speed      ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);
using namespace std;
#define ll        long long
ll gcd(ll a, ll b){if (b == 0)return a;return gcd(b, a % b);}
ll lcm(ll a, ll b){return ((a/gcd(a,b))*b);}
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(),v.rend()
#define vll vector<ll>v(n)
#define f    first
#define s    second
#define FOR(v) for(auto&i:v) cin>>i;
#define rep2(a,b) for(ll i=a;i>=b;i--)
bool odd(ll num) { return ((num & 1) == 1); }
bool even(ll num) { return ((num & 1) == 0); }
void gen()
{
    ll n,m,k;
    cin>>n>>m>>k;
    vector<ll>pos(n);
    FOR(pos);
    vector<ll>gaps;
    for(ll i=0;i<n-1;i++)  gaps.push_back(pos[i+1]-pos[i]-1);
    sort(rall(gaps));
    if(k==1) cout<<pos[n-1]-pos[0]+1<<'\n';
    else if(k>=n) cout<<n<<'\n';
    else
    {
        ll len = pos[n-1] - pos[0] + 1;
        ll sum= accumulate(gaps.begin(), gaps.begin() + (k - 1), 0);
        cout<<len-sum<<'\n';
    }
}
signed main()
{
    god_speed
    ll t=1;
    //cin>>t;
    while(t--)
    {
    gen();
    }
    return 0;
}