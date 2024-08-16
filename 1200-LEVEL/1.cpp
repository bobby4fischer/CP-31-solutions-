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
    pair<int,int>a[n],b[n],c[n];
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        a[i]=make_pair(x,i);
    }
    sort(a,a+n);
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        b[i]=make_pair(x,i);
    }
    sort(b,b+n);
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        c[i]=make_pair(x,i);
    }
    sort(c,c+n);
    int ans = 0;
    for(int i = n-1; i >= n-3; i--) {
        for(int j =n-1; j>=n-3; j--) {
            for(int k = n-1; k >=n-3; k--) {
                int x = a[i].s, y = b[j].s, z = c[k].s;
                if (x != y && y != z && x != z)  ans = max(ans, a[i].f + b[j].f + c[k].f);
            }
        }
    }
    cout<<ans<<'\n';
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