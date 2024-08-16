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

    set<char>st1;
    for(int i=0;i<n;i++)  st1.insert(s[i]);
    for(int i=0;i<26;i++)
    {
        if(st1.find((char)(i+97))==st1.end()) {cout<<(char)(i+97)<<'\n';return;}
    }
    set<string>st2;
    for(int j=0;j<n-1;j++)
    {
        string m="";
        m.push_back(s[j]);
        m.push_back(s[j+1]);
        st2.insert(m);
    }
    for(int i=0;i<26;i++)
    {
        char ch=(char)(i+97);
        for(int j=0;j<26;j++)
        {
            string f="";
            f.push_back(ch);
            f.push_back((char)(j+97));
            if(st2.find(f)==st2.end()) {cout<<f<<'\n';return;}
        }
    }
    set<string>st3;
    for(int j=0;j<n-2;j++)
    {
        string m="";
        m.push_back(s[j]);
        m.push_back(s[j+1]);
        m.push_back(s[j+2]);
        st3.insert(m);
    }
    for(int k=0;k<26;k++)
    {
        char ch1=(char)(k+97);
        for(int i=0;i<26;i++)
        {
            char ch2=(char)(i+97);
            for(int j=0;j<26;j++)
            {
                string f="";
                f.push_back(ch1);
                f.push_back(ch2);
                f.push_back((char)(j+97));
                if(st3.find(f)==st3.end()) {cout<<f<<'\n';return;}
            }
        }
    }
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