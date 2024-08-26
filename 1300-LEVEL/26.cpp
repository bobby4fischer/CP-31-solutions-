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
 
signed main()
{
    
    string s;
    cin>>s;
    vector<ll>v(s.size(),0);
    for(ll i=0;i<s.size();i++)
    {
        
        if(s[i]=='v')
        {
            ll count=0;
            while(i<s.size() && s[i]=='v')
            {
                count++;
                i++;
            }
            i--;
            v[i]=count-1;
        }
    }
    
    ll ans=0;
    vector<ll>pre(v.size(),0);
    for(int i=1;i<v.size();i++) pre[i]=pre[i-1]+v[i];
    vector<ll>suff(v.size(),0);
    for(int i=v.size()-1;i>=0;i--)
    {
        if(i==v.size()-1) suff[i]=v[i];
        else suff[i]=suff[i+1]+v[i];
    }
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='o')  ans+=pre[i]*suff[i];
    }
    cout<<ans;
}