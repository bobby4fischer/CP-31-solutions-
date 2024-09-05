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
    vector<vector<ll>>bits(n,vector<ll>(33));
    for(ll i = 0 ; i < n ; i++) 
    {
        ll b;
        cin>>b;
        for(ll j = 32; j >= 0 ; j--) 
        {
            if((b&(1ll<<j))) bits[i][j]=0;
            else  bits[i][j]=1;
        }
    }
   
    for(ll i = 1; i < n ; i++) {
        for(ll j = 32 ; j >= 0 ; j--)  bits[i][j]+=bits[i-1][j];   
    }
    ll q;
    cin>>q;
    ll ans;
    while(q--) 
    {
        ll l,k;
        cin>>l>>k;
        ll ans = -1;l--;
        ll lo = l, hi = n-1,num;
        while(lo <= hi) 
        {
            num = 0;
            ll mid = (lo+hi)/2;
            for(ll i = 32 ; i >=0; i--) 
            {
                ll setBits = bits[mid][i] - (l == 0 ? 0 : bits[l-1][i]);
                if(!setBits)  num+=(1ll<<i); 
            }
            if(num >= k) {
                ans = mid;
                lo = mid+1;
            }
            else  hi = mid-1;
        }
        if(ans == -1) cout<<-1<<" ";
        else  cout<<ans+1<<" ";
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