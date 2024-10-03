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
    ll n,k1,k2;
    cin>>n>>k1>>k2;
    vector<ll>A(n),B(n);
    FOR(A);FOR(B);
    deque<ll>ans;
    for(ll i=0;i<n;i++) ans.emplace_back(abs(A[i]-B[i]));
    ll k=k1+k2;
    while(k)
    {
        sort(rall(ans));
        if(ans.front()!=0)
        {
            ans.front()--;
            k--;
        }
        else ans.pop_front();
        ll cnt=0;
        for(auto &i:ans) {if(i==0) cnt++;}
        if(cnt==ans.size()) break;
    }
    ll res=0;
    for(auto x:ans) res+=x*x;
    if(k%2) res++;
    cout<<res;
}
signed main()
{
    god_speed
    ll t=1;
    //cin>>t;
    while(t--) 	gen();
    return 0;
}