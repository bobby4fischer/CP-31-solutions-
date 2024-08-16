#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll gcd(ll a, ll b){if (b == 0)return a;return gcd(b, a % b);}
ll lcm(ll a, ll b){return ((a/gcd(a,b))*b);}
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(),v.rend()
#define f first
#define s second
#define rep2(a,b) for(ll i=a;i>=b;i--)
bool odd(ll num) { return ((num & 1) == 1); }
bool even(ll num) { return ((num & 1) == 0); }
void solve()
{
    ll n;
    cin>>n;
    vector<ll>v;
    ll ind=0;
    for(ll i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        if(i>0 && x==v[ind-1]) continue;
        else {v.push_back(x);ind++;}
    }
    if(v.size()==1||v.size()==2) {cout<<v.size()<<'\n';return;}
    else{
        ll val=0;
        vector<ll>ans;
        ans.push_back(v[0]);
        ll t=0;
        for(ll i=1;i<v.size()-1;)
        {
            if(ans[t]>v[i] && v[i]>v[i+1])
            {
                i++;
                if(i==v.size()-1) ans.push_back(v[i]); 
            }
            else if(ans[t]<v[i] && v[i]<v[i+1])
            {
                i++;
                if(i==v.size()-1) ans.push_back(v[i]);
            }
            else 
            {
                ans.push_back(v[i]);
                t++;
                i++;
                if(i==v.size()-1) ans.push_back(v[i]);
            }
        }
        cout<<ans.size()<<'\n';
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