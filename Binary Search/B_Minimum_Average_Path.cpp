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

ll N,M;
map<ll,map<ll,ll>>edges;
map<ll,bool>visited;
map<ll,ll>rev;
bool good(ld mid)
{
    queue<tuple<ll,ld,ld>>q;
    q.push({1,0,0});
    visited[1]=true;

    while(!q.empty())
    {
        auto[current,total,taken]=q.front();
        q.pop();

        if(current==N)
        {
            return total>=mid*taken;
        }
    
        for(auto[pos,val]: edges[current])
        {
            if(visited[pos])    continue;
            q.push({pos,total+val,taken+1});
            visited[pos]=true;
            rev[pos]=current;
        }  
    }
    return false;
}

int32_t main()
{
    FIO

    cin>>N>>M;
    while(M--)
    {
        ll a,b,c;   cin>>a>>b>>c;
        edges[a][b]=c;
    }
    ld l=-1,r=101;
    bool found=false;
    for(ll i=0;i<100;i++)
    {
        visited.clear();
        ld mid=(l+r)/2;
        if(good(mid))
        {
            l=mid;
            found=true;
        }
        else r=mid;
    }

    if(!found)  cout<<"-1"<<nl;
    else
    {
        vector<ll>ans;
        good(l);
        ll x=N;
        while(x!=1)
        {
            ans.pb(x);
            x=rev[x];
        }
        cout<<ans.size()<<nl;
        ans.pb(1);
        for(ll i=ans.size()-1;i>=0;i--) cout<<ans[i]<<" ";
        cout<<nl;
    }    

    return 0;
}