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
    ll n;
    cin>>n;
    vector<int>v(n);
    FOR(v);
    string s;
    cin>>s;
    vector<int>pre_xor(n+1,0);
    int xor_0=0;
    int xor_1=0;
    for(int i=1;i<=n;i++) 
    {
        pre_xor[i]=pre_xor[i-1]^v[i-1];

        if(s[i-1]=='0') xor_0=xor_0^v[i-1];
        else xor_1=xor_1^v[i-1];
    }
    int q;
    cin>>q;
    while(q--)
    {
        int type;cin>>type;
        if(type==1)
        {
            int l,r;
            cin>>l>>r;
            xor_0=xor_0^(pre_xor[r]^pre_xor[l-1]);
            xor_1=xor_1^(pre_xor[r]^pre_xor[l-1]);
        }
        else
        {
            int m;
            cin>>m;
            if(m) cout<<xor_1<<' ';
            else cout<<xor_0<<' ';
        }
    }
    cout<<'\n';
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