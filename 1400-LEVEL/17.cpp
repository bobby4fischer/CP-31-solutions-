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
    vector<ll>uni(n),score(n);
    FOR(uni);
    FOR(score);
    map<ll,vector<ll>>mp;
    for(ll i=0;i<n;i++) mp[uni[i]].emplace_back(score[i]);

    map<ll,vector<ll>>pre;
    for(auto &it : mp) 
    {
        vector<ll>curr(all(it.s));
        sort(rall(curr));

        vector<ll> curr_pre(curr.size()+1,0);
        for(ll j=0;j<curr.size();j++) curr_pre[j + 1]=curr_pre[j]+curr[j];
        pre[it.f]=curr_pre;
    }

    vector<ll>ans(n,0);
    for(auto &ele : mp) 
    {
        ll index = ele.f;
        auto &curr = pre[index];
        ll m = curr.size()-1;
        for(ll k=1;k<=m;k++) ans[k-1]+=curr[(m / k) * k];
    }
    for(auto &i:ans) cout<<i<<" ";
    cout<<'\n';
}
signed main()
{
    god_speed
    ll t;
    cin>>t;
    while(t--) 	gen();
    return 0;
}