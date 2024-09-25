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
    ll n;
    cin>>n;
    string s;
    cin>>s;
    vector<ll>sheep;
    for(ll i = 0; i < s.size(); i++) 
    {
        if(s[i] == '*') sheep.push_back(i);
    }
    if(sheep.size() == 0) cout<<0<<'\n';
    else
    {
        for(ll i = 0; i < sheep.size(); i++) sheep[i] -= i;
        ll median = sheep[sheep.size() / 2];
        ll moves = 0;
        for(ll s:sheep)  moves += abs(s - median);
        cout<<moves<<'\n';
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