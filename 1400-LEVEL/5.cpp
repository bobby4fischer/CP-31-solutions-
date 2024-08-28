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
void gen()
{
    ll n,m;
    cin>>n>>m;
    vector<int>a(n-1);
    vector<int>b(n);
    FOR(a);FOR(b);
    a.push_back(1);
    sort(all(a));
    sort(all(b));
    int i=n-1,j=n-1;
    int count=0;
    while(i>=0)
    {
        if(a[i]<b[j])
        {
            count++;
            i--;
            j--;
        }
        else i--;
    }
    cout<<n-count<<'\n';
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