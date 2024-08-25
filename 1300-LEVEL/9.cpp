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
    ll n;
    cin>>n;
    unordered_map<ll,ll>mp;
    ll k[n];
    vector<ll> bits[n]; //array of n vectors
    for(int j=0;j<n;j++)
    {
        cin>>k[j];
        for(ll i=0;i<k[j];i++)
        {
            ll x;
            cin>>x;
            mp[x]++;
            bits[j].push_back(x);
        }
    }
    bool flag=true;
    for(ll i=0; i<n; i++)
    {
        ll f=0;
        for(ll j=0; j<k[i]; j++)
        {
            if(mp[bits[i][j]]==1){
                f++;
                break;
            }
        }
        if(f==0) {cout<<"Yes"<<'\n';flag=false;break;}
    }
    if(flag) cout<<"No"<<'\n';
}
signed main()
{
    god_speed
    ll t;
    cin>>t;
    while(t--)
    {
    gen();
    }
    return 0;
}