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
 
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    int cnt = 0,st = 0,i=0;
	char c1,c2,nw;
    set<char>stc;
	while(i<s.size())
	{
		st = i;
		while(s[i] == s[st] && i<s.size()) i++;
		cnt = i - st;
		if(cnt>1)
		{
			c1 = s[st];
            if(i!=s.size()) c2 = s[i];
			for(int i=0;i<26;i++)
            {
                char t=(char)(i+97);
                if(stc.size()==0)
                {
                    if(t!=c1 && t!=c2) {nw=t;stc.insert(nw);i=27;}
                }
                else
                {
                    if(t!=c1 && t!=c2 && stc.find(t)!=--stc.end()) {nw=t;stc.insert(nw);i=27;}
                }
            }
		}
		for(int j = st+1;j<i;j+=2) s[j] = nw;
	}
	cout<<s;
}