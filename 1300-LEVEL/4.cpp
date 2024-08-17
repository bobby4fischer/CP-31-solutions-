#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll gcd(ll a, ll b){if (b == 0)return a;return gcd(b, a % b);}
ll lcm(ll a, ll b){return ((a/gcd(a,b))*b);}
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(),v.rend()
#define vll vector<ll>v(n)
#define f first
#define s second
#define FOR(v) for(auto&i:v) cin>>i;
#define rep2(a,b) for(ll i=a;i>=b;i--)
bool odd(ll num) { return ((num & 1) == 1); }
bool even(ll num) { return ((num & 1) == 0); }
vector<ll> primeFactorization(ll n) 
{
	vector<ll> factors;
	for(ll i = 2; i * i <= n; i++) {
		ll cnt = 0; 
		while(n % i == 0) {
			cnt++;
			n /= i;
			factors.push_back(i);
		}
	}
	if(n > 1) factors.push_back(n);
	return factors;
}
void solve()
{
    ll n;
	cin >> n;
	vector<ll>v(n);
    FOR(v);
	map<ll, ll> mp;
	for(ll i = 0; i < n; i++) 
    {
		vector<ll> primes = primeFactorization(v[i]);
		for(auto p : primes) mp[p]++;
	}
	for(auto i : mp) {
		if(i.second % n != 0) {
			cout << "NO" << '\n';
			return;
		}
	}
	cout << "YES" << '\n';
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
    solve();
    }
    return 0;
}