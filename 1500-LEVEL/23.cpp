#include<bits/stdc++.h>
#define god_speed      ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);
using namespace std;
#define ll  long long
ll gcd(ll a, ll b){if (b == 0)return a;return gcd(b, a % b);} ll lcm(ll a, ll b){return ((a/gcd(a,b))*b);}
#define all(v) v.begin(), v.end() 
#define rall(v) v.rbegin(),v.rend()
#define f    first
#define s    second
#define FOR(v) for(auto&i:v) cin>>i;
priority_queue<ll,vector<ll>,greater<ll>>pq;
vector<ll>edge[500005];
bool visited[500005];
void gen()
{
    ll n,m;
    cin>>n>>m;
    while(m--)
    {
        ll x,y;
        cin>>x>>y;
        edge[x].push_back(y);
        edge[y].push_back(x);
    }
    visited[1] = true;
    pq.push(1);
    while(!pq.empty())
    {
        cout<<pq.top()<<" ";
        ll a=pq.top();
        pq.pop();
        for(auto &x:edge[a])
        {
            if(!visited[x])
            {
                pq.push(x);
                visited[x]=true;
            }
        }
    }
}
signed main()
{
    god_speed
    ll t=1;
    //cin>>t;
    while(t--) 	gen();
    return 0;
}