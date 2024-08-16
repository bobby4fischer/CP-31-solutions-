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
    int n;
    cin>>n;
    pair<int,int>p[n];
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        p[i].s=i+1;
        p[i].f=x;
    }
    sort(p,p+n);
    vector<pair<int,int>>ans;
    int ind=-1;
    int ind2=0;

    for(int i=1;i<n;i++)
    {
        if(p[i].f!=p[0].f) {ind=p[i].s;ans.push_back({p[0].s,ind});ind2++;}
    }

    if(ind==-1) {cout<<"NO"<<'\n';return;}

    for(int i=1;i<n;i++)
    {
        if(p[i].f==p[0].f) {ans.push_back({p[i].s,p[n-1].s});}
        else break;
    }
    cout<<"YES"<<'\n';
    for(int i=0;i<n-1;i++)
    {
        cout<<ans[i].f<<" "<<ans[i].s<<'\n';
    }
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