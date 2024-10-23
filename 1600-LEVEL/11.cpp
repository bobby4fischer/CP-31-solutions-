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
    ll n,k;cin>>n>>k;
    string a,b;cin>>a>>b;
    vector<char>v;
    unordered_set<char>st;
    ll i=0,ans=0;
    while(i<n)
    {
        if(a[i]!=b[i])
        {
            ll j=i;
            while(j<n && a[j]!=b[j])
            {
                if(st.find(a[j])==st.end()) v.push_back(a[j]);
                st.insert(a[j]);
                j++;
            }
            i=j;
        }
        else
        {
            ll j=i;
            while(j<n && a[j]==b[j]) j++;
            ans+=((j-i)*(j-i+1))/2;
            i=j;
        }
    }
    sort(all(v));
    k=min(k,(ll)v.size());
    ll x=1LL<<(v.size());
    for(ll mask=0;mask<x;mask++)
    {
        ll hash[26]={0};
        ll count=0;
        if(__builtin_popcountll(mask)==k)
        {
            for(ll i=0;i<v.size();i++)
            {                                                                                        
                if((mask & (1LL<<i)))
                {
                    if(!hash[v[i]-'a'])  count++;
                    hash[v[i]-'a']=1;
                }
            }
        }
        if(count==k)
        {
            ll i=0,sum=0;
            while(i<n)
            {
                ll j=i;
                while(j<n)
                {
                    if(a[j]!=b[j] && !hash[a[j]-'a']) break;
                    j++;
                }
                sum+=((j-i)*(j-i+1))/2;
                i=j+1;
            }
            ans=max(ans,sum);
        }
    }
    cout<<ans<<'\n';
}
signed main()
{
    god_speed
    ll t;
    cin>>t;
    while(t--) 	gen();
    return 0;
}