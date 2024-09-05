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
const int N=40010;
vector<vector<int>>dp;
vector<int>palin;

int solve(int i, int j) 
{
    // Base cases
    if(i == 0) return 1; 
    if(j == 0) return 0; 
    
    if(dp[i][j] != -1) return dp[i][j];
    if(palin[j] <= i)  dp[i][j] = (solve(i, j - 1) + solve(i - palin[j], j)) %1000000007;
    else  dp[i][j] = solve(i, j - 1);

    return dp[i][j];
}
void gen()
{
    ll n;                                                                                 
    cin>>n;
    cout<<solve(n, palin.size()-1)<<'\n';
}

signed main()
{
    god_speed
    for(int i=0;i<N;i++)
    {
        string a=to_string(i);
        string b=a;
        reverse(all(b));
        if(a==b) palin.push_back(i);
    }
    dp.clear();
    dp.resize(N + 1, vector<int>(palin.size(), -1));

    ll t;
    cin>>t;
    while(t--)
    {
    gen();
    }
    return 0;
}