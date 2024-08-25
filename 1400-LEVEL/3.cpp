#include<bits/stdc++.h>
#define god_speed      ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);
using namespace std;
#define ll        long long
ll gcd(ll a, ll b){if (b == 0)return a;return gcd(b, a % b);}
ll lcm(ll a, ll b){return ((a/gcd(a,b))*b);}
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(),v.rend()
#define vll vector<ll>v(n)
#define f    first
#define s    second
#define FOR(v) for(auto&i:v) cin>>i;
#define rep2(a,b) for(ll i=a;i>=b;i--)
bool odd(ll num) { return ((num & 1) == 1); }
bool even(ll num) { return ((num & 1) == 0); }
bool check(int k, vector<pair<int, int>>& seg) {
    int i = 0, j = 0;
    for (auto &e:seg) {
        i = max(i - k, e.first);
        j = min(j + k, e.second);
        if (i > j) return false;
    }
    return true;
}
void gen()
{
    int n;
    cin>>n;
    vector<pair<int,int>>v(n);
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        v[i]={x,y};
    }
    ll i=0,j=1000000010;
    while(i<=j)
    {
        int mid=(i+j)/2;
        if(check(mid,v)) j=mid-1;
        else i=mid+1;
    }
    cout<<j+1<<'\n';
}
signed main()
{
    god_speed
    ll t;
    cin>>t;
    while(t--)
    {
    gen();
    }
    return 0;
}