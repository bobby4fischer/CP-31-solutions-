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
    int n;
    cin>>n;
    string s;
    cin>>s;
    int ans = 1e9;
    for(int i='a';i<='z';i++)
    {
        int change=0;
        int l=0,r=n-1;
        while(r-l>=1)
        {
            if(s[l]!=s[r])
            {
                if(s[l]==i) { l++; change++;}
                else if(s[r]==i) { r--; change++;}
                else { change=1e9; break;}
            }
            else { l++; r--; }
        }
        ans=min(ans,change);
    }
    if(ans == 1e9) cout<<-1<<"\n";
    else cout<<ans<<"\n";
}
signed main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
    solve();
    }
    return 0;
}