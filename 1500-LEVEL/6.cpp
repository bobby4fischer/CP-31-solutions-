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
    string s;
    cin>>s;
    ll p=0,m=0;
    for(auto ele:s)
    {
        if(ele=='+') p++;
        else m++;
    }
    ll q;cin>>q;
    while(q--)
    {
        ll x,y;
        cin>>x>>y;

        if(p==m) cout<<"YES"<<'\n';
        else
        {
            if( x==y || ((p-m)*y)%(y-x)!=0 ) cout<<"NO"<<'\n';
            else
            {
                ll i=m*(-1),j=p;
                ll val=((p-m)*y)/(y-x);
                if(val>=i && val<=p) cout<<"YES"<<'\n';
                else cout<<"NO"<<'\n';
            }
        }
    }
}
signed main()
{
    god_speed
    gen();
}