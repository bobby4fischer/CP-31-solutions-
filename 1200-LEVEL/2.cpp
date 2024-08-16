#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll gcd(ll a, ll b){if (b == 0)return a;return gcd(b, a % b);}
ll lcm(ll a, ll b){return ((a/gcd(a,b))*b);}
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(),v.rend()
#define f first
#define s second
#define rep1(a,b) for(ll i=a;i<b;i++)
#define rep2(a,b) for(ll i=a;i>=b;i--)
bool odd(ll num) { return ((num & 1) == 1); }
bool even(ll num) { return ((num & 1) == 0); }
void solve()
{
    int n;
    cin>>n;
    vector<ll>v(n);
    int even_c=0, odd_c=0;
    for(auto &i:v)
    {
        cin>>i;
        if(even(i)) even_c++;
        else odd_c++;
    }
    if(odd_c>0&&even_c>0) cout<<2<<'\n';
    else
    {
        ll t=4;
        set<ll>s;
        while(s.size()!=2)
        {
        for(ll i=0;i<n;i++) s.insert(v[i]%t);
        if(s.size()!=2) {s.clear();t*=2;}
        }
        cout<<t<<'\n';
    }
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