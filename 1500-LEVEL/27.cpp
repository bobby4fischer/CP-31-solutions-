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
bool cmp(pair<pair<ll,ll>,ll> &a,pair<pair<ll,ll>,ll> &b)
{
    if(a.f.f==b.f.f) return a.f.s<b.f.s;
    return a.f.f<b.f.f;
}
void gen()
{
    ll n;
    cin>>n;
    pair<pair<ll,ll>,ll>A[n];
    for(ll i=0;i<n;i++)  
    {
        cin>>A[i].f.f>>A[i].f.s;
        A[i].s=i+1;
    }
    sort(A,A+n,cmp);
    ll i=0,j=1;
    while(j<n)
    {
        if(A[i].f.f==A[j].f.f) {cout<<A[i].s<<" "<<A[j].s; return;}
        else if(A[i].f.s>=A[j].f.s) {cout<<A[j].s<<" "<<A[i].s; return;}
        i++;
        j++;
    }
    cout<<-1<<" "<<-1;
}
signed main()
{
    god_speed
    ll t=1;
    //cin>>t;
    while(t--) 	gen();
    return 0;
}