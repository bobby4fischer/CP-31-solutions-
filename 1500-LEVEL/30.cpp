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
bool cmp(pair<ll,ll> &it1,pair<ll,ll> &it2)
{
    if(it1.f==it2.f) return it1.s<it2.s;
    return it1.f<it2.f;
}
void gen()
{
    ll n;
    cin>>n;
    vector<pair<ll,ll>>v(n);
    for(ll i=0;i<n;i++) cin>>v[i].f>>v[i].s;
    sort(all(v),cmp);
    ll ans=0;
    ll i=0,j=1;
    while(j<n)
    {
        if(v[i].s<v[j].f) {v[i].f=-1;i=j;}
        j++;
    }
    v[i].f=-1;
    ll idx=0;
    while(v[idx].f==-1) idx++;
    i=idx;
    j=i+1;
    while(j<n)
    {
        if(v[j].s!=-1 && v[i].s<v[j].f) {v[i].f=-2;i=j;}
        j++;
    }
    v[i].f=-2;
    for(auto &x:v) if(x.f==-1||x.f==-2) ans++;
    if(ans==n) cout<<"YES"<<'\n';
    else cout<<"NO"<<'\n';
}
signed main()
{
    god_speed
    ll t=1;
    while(t--) 	gen();
    return 0;
}