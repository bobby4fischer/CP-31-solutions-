#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll gcd(ll a, ll b){if (b == 0)return a;return gcd(b, a % b);}
ll lcm(ll a, ll b){return ((a/gcd(a,b))*b);}
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(),v.rend()
#define f first
#define s second
#define FOR for(auto&i:arr) cin>>i;
#define rep2(a,b) for(ll i=a;i>=b;i--)
bool odd(ll num) { return ((num & 1) == 1); }
bool even(ll num) { return ((num & 1) == 0); }
int  main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,k;
    cin>>n>>k;
    vector<ll>arr(n);
    FOR;
    ll res=0;  
    for(ll i=0;i<=n;i++)
    {
        vector<ll> subarr(arr.begin(), arr.begin() + i);
        sort(rall(subarr));
        ll sum = 0;
        for (ll j = 0; j < subarr.size(); j += 2) sum += subarr[j];
        if(sum <= k) res= i;
    }
    cout<<res<<'\n';
}