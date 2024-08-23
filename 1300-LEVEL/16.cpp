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
    ll n,w;
    cin>>n>>w;
    vector<int>v(20,0);// 2^20 > 10^6
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v[log2(x)]++;
    }
    
    int maxht = 1, space_left = w;
    while(n--)
    {
        int largest = -1;
        for (int i = 19; i >= 0; i--) 
        {
            if (v[i] && (1 << i) <= space_left) 
            {
                largest = i;
                break;
            }
        }

        if (largest == -1) 
        {
            space_left = w;
            maxht++;
            for (int i = 19; i >= 0; i--) 
            {
                if (v[i] and (1 << i) <= space_left) 
                {
                    largest = i;
                    break;
                }
            }
        }

        v[largest] -= 1;
        space_left -= 1 << largest;
    }
    cout<<maxht<<'\n';
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