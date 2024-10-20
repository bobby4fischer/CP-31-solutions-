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
    vector<ll>v(n);
    FOR(v);
    sort(all(v));
    vector<ll>ans;
    ll i=0,j=n-1;
    ll sum=0;
    while(i<=j)
    {
        if(sum<=0)
        {
            sum+=v[j];
            ans.emplace_back(v[j]);
            j--;
        }
        else
        {
            sum+=v[i];
            ans.emplace_back(v[i]);
            i++;
        }
    }
    if(ans.size()==n and v[n-1]!=0)
    {
        cout<<"Yes"<<'\n';
        for(auto &x:ans) cout<<x<<" ";
        cout<<'\n';
    }
    else cout<<"No"<<'\n';
}
signed main()
{
    god_speed
    ll t;
    cin>>t;
    while(t--) 	gen();
    return 0;
}