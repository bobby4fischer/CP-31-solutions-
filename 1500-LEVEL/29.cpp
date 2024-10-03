#include<bits/stdc++.h>
#define god_speed      ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);
using namespace std;
#define ll  long long
ll gcd(ll a, ll b){if (b == 0)return a;return gcd(b, a % b);} ll lcm(ll a, ll b){return ((a/gcd(a,b))*b);}
#define all(v) v.begin(), v.end() 
#define rall(v) v.rbegin(),v.rend()
#define f    first
#define s    second
#define FOR(v) for(auto &i:v) cin>>i;
void gen()
{
    ll n;
    cin>>n;
    vector<ll>v(n);
    FOR(v);
    ll val=v[0];
    vector<ll>ans;
    for(ll i=0;i<n;i++)
    {
        if(v[i]==1) ans.push_back(i);
        val=gcd(val,v[i]);
    }
    if(ans.size()==0 && val!=1) {cout<<-1;return;}
    else
    {
        if(ans.size()) cout<<n-ans.size();
        else
        {
            ll res=LLONG_MAX;
            for(ll i=0;i<n;i++)
            {
                ll val1=v[i];
                for(ll j=i;j<n;j++)
                {
                    val1=gcd(val1,v[j]);
                    if(val1==1)
                    {
                        res=min(res,j-i+1);
                        break;
                    }
                }
            }
            cout<<(res-1)+(n-1);
        }
    }
}
signed main()
{
    god_speed
    ll t=1;
    while(t--) 	gen();
    return 0;
}