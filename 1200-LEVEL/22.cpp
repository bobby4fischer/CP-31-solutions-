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

int  main()
{
    ll n,k,x;
    cin>>n>>k>>x;
    vector<ll>a(n);
    for(ll i=0;i<n;i++) cin>>a[i];
    sort(all(a));
    vector<ll>irr;
    for(ll i = 1LL; i < n; i++) {
        if (a[i] - a[i - 1LL] > x) {
            irr.push_back(a[i] - a[i - 1LL]);
        }
    }
    sort(rall(irr));
    ll m = irr.size();
    for(ll i = m - 1LL; i >= 0LL; i--) {
        if ((irr[i] - 1LL) / x <= k) {
            k -=(irr[i] - 1LL) / x;
            irr.pop_back();
        }
    }
    cout<<irr.size() + 1LL<<'\n';
}