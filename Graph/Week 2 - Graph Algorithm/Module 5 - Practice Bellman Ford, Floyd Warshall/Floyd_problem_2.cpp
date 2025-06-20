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
    ll n;   cin>>n;
    ll adj[n][n];
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<n;j++)
        {
            cin>>adj[i][j];
            if(adj[i][j]==-1)   adj[i][j]=LLONG_MAX;           
        }           
    }
    for(ll k=0;k<n;k++)
    {
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<n;j++)
            {
                if(k==i || k==j || adj[i][k]==LLONG_MAX || adj[k][j]==LLONG_MAX)    continue;
                if(adj[i][k]+adj[k][j] < adj[i][j])
                {
                    adj[i][j]=adj[i][k]+adj[k][j];
                }           
            }           
        }
    }
    ll mx=LLONG_MIN;
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<n;j++)
        {
            if(adj[i][j]==LLONG_MAX)    continue;
            mx=max(mx,adj[i][j]);           
        }           
    }
    cout<<mx<<nl;
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