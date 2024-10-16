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
    ll n,m,k;
    cin>>n>>m>>k;
    vector<ll>a(n),b(m);
    FOR(a);FOR(b);
    vector<ll>a1(n+1,0),b1(m+1,0);
    for(ll i=0;i<n;i++)
    {
        while(i<n and a[i]==0) i++;
        ll j=i;
        while(j<n and a[j]) j++;
        for(ll k=1;k<=j-i;k++) a1[k]+=(j-i)+1-k;
        i=j;
    }
    for(ll i=0;i<m;i++)
    {
        while(i<m and b[i]==0) i++;
        ll j=i;
        while(j<m and b[j]) j++;
        for(ll k=1;k<=j-i;k++) b1[k]+=(j-i)+1-k;
        i=j;
    }
    ll ans=0;
    for(ll i=1;i<=n;i++)
    {
        if((k%i)==0 and (k/i)<=m) ans+=a1[i]*b1[k/i];
    }
    cout<<ans;
}
signed main()
{
    god_speed
    gen();
    return 0;
}
