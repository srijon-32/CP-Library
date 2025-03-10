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

ll N,M,D;
map<ll,map<ll,ll>>edges;
map<ll,bool>visited;
map<ll,ll>rev;
bool good(ll mid)
{
    queue<pair<ll,ll>>q;
    q.push({1,0});
    visited[1]=true;
    while(!q.empty())
    {
        auto [current,taken]=q.front();
        q.pop();

        if(current==N)  return true;
        if(taken==D)    continue;

        for(auto[pos,val]: edges[current])
        {
            if(val>mid || visited[pos]) continue;
            visited[pos]=true;
            q.push({pos,taken+1});
            rev[pos]=current;
        } 
    }

    return false;
}
int32_t main()
{
    FIO

    cin>>N>>M>>D;

    ll l=LONG_MAX,r=LONG_MIN;

    while(M--)
    {
        ll a,b,c;   cin>>a>>b>>c;
        l=min(l,c),r=max(r,c);
        edges[a][b]=c;
    }

    l--,r++;
    bool found=false;
    while(l+1<r)
    {
        visited.clear();
        ll mid=(l+r)/2;
        if(good(mid))
        {
            r=mid;
            found=true;
        }
        else    l=mid;
    }

    if(!found)  cout<<"-1"<<nl;
    else
    {
        vector<ll>ans;
        ll x=N;
        while(x!=1)
        {
            ans.pb(x);
            x=rev[x];
        }
        cout<<ans.size()<<nl;
        ans.pb(1);
        for(ll i=ans.size()-1;i>=0;i--)
        {
            cout<<ans[i]<<" ";
        }
        cout<<nl;
    }

    return 0;
}