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
    ll n;cin>>n;
    char ch;cin>>ch;
    string s;cin>>s;
    ll count=0;
    set<ll>st;
    for(ll i=0;i<s.size();i++) 
    {   
        if(s[i]!=ch) count++; 
        else st.insert(i+1);
    }
    ll ind=-1;
    for(auto it=st.begin();it!=st.end();it++)
    {
        if((*it) * 2 > n) {ind=*it;break;}
    }
    if(count==0 ) cout<<0<<'\n';
    else if(ind!=-1)  cout<<1<<'\n'<<ind<<'\n';
    else cout<<2<<'\n'<<s.size()<<" "<<s.size()-1<<'\n';
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