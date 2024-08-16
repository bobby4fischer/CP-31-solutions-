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
    string a,b;
    cin>>a>>b;
    vector<pair<int,int>>p;
    int j=0;
    int cnt0=0,cnt1=0;

    for(int i=0;i<n;i++)
    {
        if(a[i]=='1') cnt1++;
        else cnt0++;
        if(cnt1==cnt0) {p.push_back({j,i});j=i+1;}
    }
    if(n==1) {((a[0]==b[0])?cout<<"YES"<<'\n':cout<<"NO"<<'\n');return;}
    else
    {
        for(int i=0;i<p.size();i++)
        {
            if(a[p[i].f] == b[p[i].f]) continue;
            else
            {
                for(int j=p[i].f;j<=p[i].s;j++)
                {
                    if(a[j]=='1') a[j]='0';
                    else a[j]='1';
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            if(a[i]!=b[i]) {cout<<"NO"<<'\n';return;}
        }
        cout<<"YES"<<'\n';
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