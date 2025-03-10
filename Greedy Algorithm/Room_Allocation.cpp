/* SRIJON
        SINGHA
            SAMANTA */
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
#define nl "\n"
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define yes cout << "YES" << nl
#define no cout << "NO" << nl
#define fi first
#define sec second
#define pb push_back
#define ppb pop_back
#define pf push_front
#define ppf pop_front
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
const int mod = 1e9 + 7;

struct val
{
    ll a,b,c;
};

bool cmp(val x,val y)
{   
    if(x.b==y.b)
    {
        if(x.a==y.a)    return x.c<y.c;
        return x.a<y.a;
    }
    return x.b<y.b;
}

void solve()
{

    ll n;   cin>>n;
    vector<val>v(n);
    for(ll i=0;i<n;i++)
    {
        cin>>v[i].b>>v[i].a;
        v[i].c=i;
    }
    sort(all(v),cmp);
    vector<ll>ans(n);
    priority_queue<pair<ll,ll>,vector<pair<ll,ll>>,greater<pair<ll,ll>>>pq;
    for(ll i=0;i<n;i++)
    {
        if(pq.empty() || v[i].b<=pq.top().fi)
        {
            ans[v[i].c]=1LL*(pq.size())+1;
            pq.push({v[i].a,1LL*(pq.size())+1});
        }
        else
        {  
            ll aa=pq.top().sec;
            ans[v[i].c]=aa;
            pq.pop();
            pq.push({v[i].a,aa});  
        }
    }
    cout<<pq.size()<<nl;
    for(ll i=0;i<n;i++) cout<<ans[i]<<" ";           
    cout<<nl;

}

int32_t main()
{
    FIO

    ll t=1;
    // cin>>t;
    for(ll i=1;i<=t;i++)
    {
        // cout<<"Case "<<i<<": ";
        solve();           
    }

    return 0;
}