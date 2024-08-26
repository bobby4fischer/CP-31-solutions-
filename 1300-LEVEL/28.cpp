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
const ll MAX=1e6;
 
int main()
{
    
    ll n; cin>>n;
    vector<ll>v(n),count(MAX+1);
    ll sum=0;
    for(ll i=0;i<n;i++)
    {
        cin>>v[i];
        count[v[i]]++;
        sum+=v[i];
    }
    vector<ll>ans;
    for(ll i=0;i<n;i++)
    {
        sum-=v[i];
        count[v[i]]--;
        if(sum%2==0 && sum/2<=MAX && count[sum/2]>0) ans.push_back(i);
        sum+=v[i];
        count[v[i]]++;
    }
    cout<<ans.size()<<'\n';
    for(auto i:ans) cout<<i+1<<" ";
    cout<<'\n';
}