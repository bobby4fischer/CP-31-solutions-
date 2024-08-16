#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll gcd(ll a, ll b){if (b == 0)return a;return gcd(b, a % b);}
ll lcm(ll a, ll b){return ((a/gcd(a,b))*b);}
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(),v.rend()
#define f first
#define s second
#define rep2(a,b) for(ll i=a;i>=b;i--)
bool odd(ll num) { return ((num & 1) == 1); }
bool even(ll num) { return ((num & 1) == 0); }
void solve()
{
    ll n,m;
    cin>>n>>m;
    vector<ll>v[m];
 
    //getting in column wise order
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<m;j++)
        {
            ll x;
            cin>>x;
            v[j].push_back(x);
        }
    }
 
    //sort
    for(ll i=0;i<m;i++) sort(v[i].begin(),v[i].end());
 
    ll ans=0;
    for(ll i=0;i<m;i++)
    {
        //making an array of suffix sum
        vector<ll>res(n,0);
        res[n-1]=v[i][n-1];
        for(ll j=n-2;j>=0;j--) res[j]=res[j+1]+v[i][j]; 
 
    //calculating sum for each element
    for(ll j=0;j<n-1;j++){
        ll cnt=res[j+1]-(n-1-j)*v[i][j];
        ans+=cnt;
    }
    }
    cout<<ans<<endl;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
    solve();
    }
    return 0;
}