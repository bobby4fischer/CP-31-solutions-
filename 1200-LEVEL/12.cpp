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
    ll n;
    cin>>n;
    vector<ll>v(n);
    FOR;
    vector<ll>v2(n);
    for(auto &i:v2) cin>>i;
    vector<ll>val(n);
    for(ll i=0;i<n;i++) val[i]=v2[i]-v[i];
    sort(all(val));
    reverse(all(val));
    ll ind=-1;
    for(ll i=0;i<n;i++) if(v[i]>=0) { ind=i; break; }
    if(ind!=-1)
    {
        ll j = n - 1, cnt = 0;
        for(int i = 0; i < n; i++)
        {
            while(j > i && val[i] + val[j] < 0) j--;
            if(j <= i) break;
            cnt++;
            j--;
        }
        cout<<cnt<<'\n';
    }
    else cout<<0<<'\n';
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