#include<bits/stdc++.h>
#define god_speed      ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);
using namespace std;
#define ll        long long
ll gcd(ll a, ll b){if (b == 0)return a;return gcd(b, a % b);}
ll lcm(ll a, ll b){return ((a/gcd(a,b))*b);}
#define all(ans) ans.begin(), ans.end()
#define rall(ans) ans.rbegin(),ans.rend()
#define vll vector<ll>v(n)
#define f    first
#define s    second
#define FOR(ans) for(auto&i:ans) cin>>i;
#define rep2(a,b) for(ll i=a;i>=b;i--)
bool odd(ll num) { return ((num & 1) == 1); }
bool even(ll num) { return ((num & 1) == 0); }
void gen()
{
    ll n;
    cin>>n;
    string s;
    cin>>s;
    stack<char>st1,st2;
    vector<int>ans;
    ll c1=0,c2=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==')')
        {
            if(!st1.empty() && st1.top()=='(')
            {
                st1.pop();
                ans.push_back(1);
            }
            else
            {
                st2.push(s[i]);
                ans.push_back(2);
            }
        }
        else
        {
            if(!st2.empty() && st2.top()==')')
            {
                st2.pop();
                ans.push_back(2);
                c2++;
            }
            else
            {
                st1.push(s[i]);
                ans.push_back(1);
                c1++;
            }
        }
    }
    if(!st1.empty() || !st2.empty()) cout<<-1<<'\n';
    else
    {
        if(c1!=0 && c2!=0)  cout<<2<<'\n';
        else cout<<1<<'\n';
        for(ll i = 0 ; i < ans.size() ; i++) 
        {
            if(c2 == 0 || c1 == 0)  cout<<1<<" ";
            else  cout<<ans[i]<<" ";
        }
        cout<<'\n';
    }
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