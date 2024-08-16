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
    vector<vector<int>>v(n,vector<int>(n));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            char x;
            cin>>x;
            v[i][j]=(x-'0');
        }
    }
    pair<int,int>p[4];
    p[0]={0,0};
    p[1]={0,n-1};
    p[2]={n-1,n-1};
    p[3]={n-1,0};
    int x1=0,y1=0,x2=0,y2=n-1,x3=n-1,y3=n-1,x4=n-1,y4=0;
    int ans=0;
    int arr[2]={0,0};
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            int a1=p[0].first,b1=p[0].second;
            int a2=p[1].first,b2=p[1].second;
            int a3=p[2].first,b3=p[2].second;
            int a4=p[3].first,b4=p[3].second;
            if(p[0].second<p[1].second)
            {
                arr[v[a1][b1]]++;
                arr[v[a2][b2]]++;
                arr[v[a3][b3]]++;
                arr[v[a4][b4]]++;
                ans+=min(arr[0],arr[1]);
            }
            p[0].second++;
            p[1].first++;
            p[2].second--;
            p[3].first--;
            arr[0]=0;
            arr[1]=0;
        }
        x1++;y1++;
        x2++;y2--;
        x3--;y3--;
        x4--;y4++;
        p[0].first=x1;p[0].second=y1;
        p[1].first=x2;p[1].second=y2;
        p[2].first=x3;p[2].second=y3;
        p[3].first=x4;p[3].second=y4;
    }
    cout<<ans<<'\n';
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