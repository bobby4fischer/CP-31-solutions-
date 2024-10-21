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
vector<ll> f(ll n)
{
    vector<ll>ans;
    for(ll i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {  
            ans.push_back(i); 
            if(i!=n/i)  ans.push_back(n/i);
        }
    }
    sort(all(ans));
    return ans;
}
ll check(string res,string ans)
{
    ll rest=0;
    for(ll i=0;i<ans.size();i++) {if(res[i]!=ans[i]) rest++;}
    return rest;
}
void gen()
{
    ll n;cin>>n;
    string s1;cin>>s1;
    string ref="abcdefghijklmnopqrstuvwxyz";
    map<char,ll>mp;
    for(auto p:ref) mp[p];
    for(auto x:s1) mp[x]++;
    vector<pair<ll,char>>v;
    for(auto i:mp) v.push_back({i.s,i.f});
    sort(rall(v));
    vector<ll>ans=f(n);
    string res="";
    ll k=LLONG_MAX;
    for(auto &i:ans)
    {
        if(i>26) break;
        map<char,ll>final,current(mp.begin(),mp.end());
        for(auto p:ref) final[p];
        multiset<char>st;
        for(ll j=0;j<i;j++)
        {
            final[v[j].s]=(n/i);
            if(mp[v[j].s]<(n/i))
            {
                ll temp=mp[v[j].s];
                while(temp!=(n/i))
                {
                    st.insert(v[j].s);
                    temp++;
                }
            }
        }
        auto it=st.begin();
        ll val=0;
        string ans=s1;
        for(ll p=0;p<n;p++)
        {
            if(current[ans[p]]>final[ans[p]])
            {
                current[ans[p]]--;
                ans[p]=*it;
                val++;
                st.erase(it);
                it=st.begin();
            }
        }
        if(val<k)
        {
            k=val;
            res=ans;
        }
    }
    cout<<k<<'\n';
    cout<<res<<'\n';
}
signed main()
{
    god_speed
    ll t;
    cin>>t;
    while(t--) 	gen();
    return 0;
}