#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll gcd(ll a, ll b){if (b == 0)return a;return gcd(b, a % b);}
ll lcm(ll a, ll b){return ((a/gcd(a,b))*b);}
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(),v.rend()
#define vll vector<ll>v(n)
#define f first
#define s second
#define FOR(v) for(auto&i:v) cin>>i;
#define rep2(a,b) for(ll i=a;i>=b;i--)
bool odd(ll num) { return ((num & 1) == 1); }
bool even(ll num) { return ((num & 1) == 0); }
void solve()
{
    ll n;
    cin>>n;
    vector<ll>v(n);
    for(int i=0;i<n;i++) 
    {
        int x;
        cin>>x;
        if(i%2==0) v[i]=x*(-1);
        else v[i]=x;
    }
    map<ll,ll>mp;
    mp[0]=1;//
    bool flag=true;
    ll sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=v[i];
        if(mp.find(sum)!=mp.end())
        {
            cout<<"YES"<<'\n';
            flag=false;
            break;
        }
        else mp[sum]++;
        if(!flag) break;
    }
    if(flag) cout<<"NO"<<'\n';
    
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