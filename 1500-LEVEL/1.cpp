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

ll eval(vector<int>&arr, int l, int mid, int r) {
    vector<int> left_sub(arr.begin() + l, arr.begin() + mid + 1);
    vector<int> right_sub(arr.begin() + mid + 1, arr.begin() + r + 1);

    int i = 0, j = 0, k = l;
    ll val = 0;

    while(i < left_sub.size() && j < right_sub.size()) 
    {
        if(left_sub[i] <= right_sub[j])  arr[k++] = left_sub[i++];
        else 
        {
            arr[k++] = right_sub[j++];
            val += (mid + 1) - (l + i);
        }
    }
    while(i < left_sub.size()) arr[k++] = left_sub[i++];
    while(j < right_sub.size()) arr[k++] = right_sub[j++];
    return val;
}

ll count(vector<int>& arr, int l, int r) {
    ll val = 0;
    if(l < r) 
    {
        int mid = l + (r - l) / 2;
        val += count(arr, l, mid);
        val += count(arr, mid + 1, r);
        val += eval(arr, l, mid, r);
    }
    return val;
}
void gen()
{
    ll n;
    cin>>n;
    vector<pair<int,int>>v;
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});
    }
    sort(all(v));
    vector<int> ans(n);
    for (int i = 0; i < n; ++i) ans[i] = v[i].second;
    ll res = count(ans, 0, n - 1);
    cout<<res<<'\n';
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