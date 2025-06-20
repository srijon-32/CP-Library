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

void solve()
{

    ll n,e; cin>>n>>e;
    ll adjMat[n][n];
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<n;j++)
        {
            adjMat[i][j]=LLONG_MAX;
            if(i==j)    adjMat[i][j]=0;          
        }           
    }
    for(ll i=0;i<e;i++)
    {
        ll u,v,w;   cin>>u>>v>>w;
        u--,v--;
        adjMat[u][v]=min(adjMat[u][v],w);
    }
    for(int k=0;k<n;k++)
    {
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<n;j++)
            {
                if(i==k || k==j || adjMat[i][k]==LLONG_MAX || adjMat[k][j]==LLONG_MAX)  continue;
                if(adjMat[i][k]+adjMat[k][j] < adjMat[i][j])
                {
                    adjMat[i][j]=adjMat[i][k]+adjMat[k][j];
                }           
            }           
        }
    }
    ll q;   cin>>q;
    while(q--)
    {
        ll u,v; cin>>u>>v;
        u--,v--;
        if(adjMat[u][v]==LLONG_MAX) cout<<-1<<nl;
        else cout<<adjMat[u][v]<<nl;
    }

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