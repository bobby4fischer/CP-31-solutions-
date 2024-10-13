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
    vector<ll>v(n);FOR(v);
    if(n==1) cout<<0<<'\n';
    else
    {
        ll ans=LLONG_MIN;
        for(ll i=1;i<n;i++)
        {
            ll diff=v[i]-v[i-1];
            if(diff<0)
            {
                diff=-diff;
                ll x=1,temp=1;
                while(diff>2*temp-1LL)
                {
                    x++;
                    temp*=2;
                }
                v[i]=v[i-1];
                ans=max(ans,x);
            }
        }
        cout<<max(0LL,ans)<<'\n';
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