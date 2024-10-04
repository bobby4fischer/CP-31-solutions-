#include<bits/stdc++.h>
#define god_speed      ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);
using namespace std;
#define ll  long long
ll gcd(ll a, ll b){if (b == 0)return a;return gcd(b, a % b);} ll lcm(ll a, ll b){return ((a/gcd(a,b))*b);}
#define all(v) v.begin(), v.end() 
#define rall(v) v.rbegin(),v.rend()
#define f    first
#define s    second
#define FOR(v) for(auto&i:v) cin>>i;
const int MOD=1000000007;
void gen()
{
    string s;
    cin>>s;
    string ans;
    for(ll i=0;i<s.size();)
    {
        if(s[i]=='b')
        {
            while(i<s.size() && s[i]=='b') i++;
            ans.push_back('b');
        }
        else if(s[i]=='a') {ans.push_back('a');i++;}
        else i++;
    }
    ll res=1;
    for(ll i=0;i<ans.size();)
    {
        ll cnt=0;
        if(ans[i]=='b') {i++;continue;}
        while(i<ans.size() && ans[i]=='a') {cnt++;i++;}
        res=((res%MOD)*(1LL+cnt)%MOD)%MOD;
    }
    cout<<res-1LL;
}
signed main()
{
    god_speed
    ll t=1;
    //cin>>t;
    while(t--) 	gen();
    return 0;
}