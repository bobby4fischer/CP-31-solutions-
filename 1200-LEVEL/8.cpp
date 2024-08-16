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
    ll n;
    cin>>n;
    vector<ll>v(n),min(n),max(n);
    for(ll i=0;i<n;i++)
    {
        cin>>v[i];
        min[i]=max[i]=v[i];
    }
    sort(all(min));
    sort(all(max));
    
    ll a=0,b=n-1;

    ll i=0,j=n-1;
    while(i<j)
    {
        if(v[i]==min[a]) {i++;a++;}
        else if(v[i]==max[b]) {i++;b--;}
        else if(v[j]==min[a]) {j--;a++;}
        else if(v[j]==min[b]) {j--;b--;}
        else break;
    }
    if(i==j) cout<<-1<<'\n';
    else cout<<i+1<<" "<<j+1<<'\n';
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