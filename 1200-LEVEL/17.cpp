#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll gcd(ll a, ll b){if (b == 0)return a;return gcd(b, a % b);}
ll lcm(ll a, ll b){return ((a/gcd(a,b))*b);}
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(),v.rend()
#define f first
#define s second
#define FOR for(auto&i:v) cin>>i;
#define rep2(a,b) for(ll i=a;i>=b;i--)
bool odd(ll num) { return ((num & 1) == 1); }
bool even(ll num) { return ((num & 1) == 0); }
void solve()
{
    ll n,x;
    cin>>n>>x;
    vector<ll>v(n);
    ll sum=0;
    for(auto &i:v)
    {
        cin>>i;
        sum+=i;
    }
    sort(all(v));
    ll days=0;
    ll ans=0;
    for(ll i=n-1;i>=0;i--)
    {
        if(sum>x)
        {
            sum-=(v[i]+days);
            continue;
        }
        ll val=((x-sum)/(i+1))+1;
        days+=val;
        ans+=val*(i+1);
        sum+=val*(i+1);
        sum-=(v[i]+days);//if not included i decrease on next iteration and we arent removing last ele then
    }
    cout<<ans<<'\n';
}
signed main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
    solve();
    }
    return 0;
}