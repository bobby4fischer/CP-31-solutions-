#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll gcd(ll a, ll b){if (b == 0)return a;return gcd(b, a % b);}
ll lcm(ll a, ll b){return ((a/gcd(a,b))*b);}
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(),v.rend()
#define f first
#define s second
#define FOR for(auto&i:v) cin>>i;
#define rep2(a,b) for(ll i=a;i>=b;i--)
bool odd(ll num) { return ((num & 1) == 1); }
bool even(ll num) { return ((num & 1) == 0); }
void solve()
{
    
}
signed main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    ll n,q;
    cin>>n>>q;
    vector<ll>v(n);
    ll sum=0;
    map<int,int>mp;
    for(ll i=0;i<n;i++)
    {
        cin>>v[i];
        sum+=v[i];
        mp[i+1]=v[i];
    }
    ll A=-1;
    while(q--)
    {
        ll t;
        cin>>t;
        if(t==1)
        {
            int ind,val;
            cin>>ind>>val;
            if(mp.count(ind)>0)
            {
                int prev=mp[ind];
                sum+=val-prev;
                mp[ind]=val;
            }
            else {
                sum+=val-A;
                mp[ind]=val;
            }
        }
        else
        {
            mp.clear();
            ll x;
            cin>>x;
            A=x;
            sum=n*x;
        }
        cout<<sum<<'\n';
    }
}