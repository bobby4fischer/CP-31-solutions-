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
    ll n,m;
    cin>>n>>m;
    vector<ll>v(m);
    FOR;
    sort(all(v));
    vector<ll>len;
    for(ll i=0;i<m-1;i++) len.push_back(v[i+1]-v[i]-1);
    ll num = v[0] + n - v[m-1] - 1;
	if(num > 0) len.push_back(num);
    sort(all(len));
    reverse(all(len));
    ll ans=0,cnt=0;
	for(ll i = 0; i<len.size(); i++)
    {
		if(len[i] - cnt*2 > 0) {
		    ll num = max(1ll, len[i] - cnt * 2 - 1);
			ans += num;
		}
		cnt += 2;
	}
    cout<<n-ans<<'\n';
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