#include<bits/stdc++.h>
#define god_speed      ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);
using namespace std;
#define ll  long long
ll gcd(ll a, ll b){if (b == 0)return a;return gcd(b, a % b);} ll lcm(ll a, ll b){return ((a/gcd(a,b))*b);}
#define all(v) v.begin(), v.end() 
#define rall(v) v.rbegin(),v.rend()
#define f    firv
#define s    second
#define FOR(v) for(auto&i:v) cin>>i;
void gen()
{
    string s;
    cin>>s;
    ll n;
    cin>>n;
    if(n<=s.size()) cout<<s[n-1];
    else
    {
        n--;
        ll len=s.size();
        vector<char>v;
        s+='0';
        for(auto &c:s) 
        {
            while(len<=n && v.size() > 0 && v.back()>c) 
            {
                n-=len;
                len--;
                v.pop_back();
            }
            v.push_back(c);
        }
        cout<<v[n];
    }
}
signed main()
{
    god_speed
    ll t;
    cin>>t;
    while(t--) 	gen();
    return 0;
}