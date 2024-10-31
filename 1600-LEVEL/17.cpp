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
bool cmp(pair<ll,pair<ll,pair<ll,ll>>>&a,pair<ll,pair<ll,pair<ll,ll>>>&b)
{
    if(a.f==b.f) return a.s.f<b.s.f;
    return a.f>b.f;
}
void gen()
{
    ll n;cin>>n;
    vector<ll>v(n);FOR(v);
    vector<pair<ll,pair<ll,pair<ll,ll>>>>ans;
    ll i=0,k=0;
    while(i<n)
    {
        ll fn=-1,ln=-1,tot=0,fn_c_2=0,ln_c_2=0,neg_cnt=0;
        while(k<n && v[k]!=0)
        {
            if(abs(v[k])==2) tot++;
            if(fn==-1 && abs(v[k])==2) fn_c_2++;
            if(v[k]<0 && fn==-1) fn=k;
            if(v[k]<0) {neg_cnt++;ln=k;}
            k++;
        }
        for(ll m=ln;m<k && ln!=-1;m++) {if(abs(v[m])==2) ln_c_2++;}
        if(fn==-1 || (neg_cnt%2==0)) ans.push_back({tot,{n-(k-i),{i,k-1}}});
        else
        {
            ll val1=tot-fn_c_2;
            ll val2=tot-ln_c_2;
            ans.push_back({val1,{n-(k-fn-1),{fn+1,k-1}}});
            ans.push_back({val2,{n-(ln-i),{i,ln-1}}});
        }
        if(v[k]==0)
        {
            while(k<n && v[k]==0) k++; 
        }
        i=k;
    }
    sort(all(ans),cmp);
    cout<<ans[0].s.s.f<<" "<<n-1-ans[0].s.s.s<<'\n';
}
signed main()
{
    god_speed
    ll t;
    cin>>t;
    while(t--) 	gen();
    return 0;
}