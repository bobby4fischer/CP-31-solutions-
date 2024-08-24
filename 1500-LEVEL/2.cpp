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
    vector<ll>v(n);
    FOR(v);
    sort(all(v));
    ll i=0,j=n-1;
    ll attacks=0;
    ll x=0;
    while(i <= j)
    {
		if(i == j){
			attacks += min(v[i]*1LL,max(0LL,((v[i]+1-x)/2))+1);
			break;
		}
		if(v[i] + x < v[j]){
			x += v[i];
			attacks += v[i];
			i++;
		}
		else {
			attacks += 1 + v[j]-x;
			v[i] -= v[j]-x;
			x=0;
			j--;
		}
	}
    cout<<attacks<<'\n';
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