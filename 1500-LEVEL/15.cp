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
void gen()
{
    ll n,k; cin>>n>>k;
    string s; cin>>s;
    for(ll i=0;i<k;i++)
    {
        vector<ll>v(3,0);
        for(ll j=i;j<n;j+=k) ((s[j]!='?') ? v[s[j]-'0']++ : v[2]++);
        if(v[0] and v[1]) {cout<<"NO"<<'\n';return;}
        else
        {
            if(v[0]==0 and v[1]==0) continue;
            else for(ll j=i;j<n;j+=k) ((v[0]>0) ? s[j]='0' : s[j]='1');
        }
    }
    ll a=0,b=0;
    for(ll i=0;i<k;i++)
    {
        if(s[i]=='0') a++;
        if(s[i]=='1') b++;
    }
    if(a>k/2||b>k/2) cout<<"NO"<<'\n';
    else cout<<"YES"<<'\n';   
}
signed main()
{
    god_speed
    ll t;
    cin>>t;
    while(t--) 	gen();
    return 0;
}