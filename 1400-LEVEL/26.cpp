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
    unordered_map<ll,ll>mp;
    for(int i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        mp[x]++;
    }
    deque<ll>q;
    for(auto it=mp.begin();it!=mp.end();it++) q.push_back(it->second);
    sort(rall(q));

    ll ans=q.front();
    ll val=q.front()-1;
    q.pop_front();
    while(q.size())
    {
        if(q.front()>=val && val>0) {ans+=val;val--;}
        else if(q.front()<val)
        {
            ans+=q.front();
            val=q.front()-1;
        }
        q.pop_front();
    }
    cout<<ans<<'\n';
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