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

    ll n,q; cin>>n>>q;
    ll prefix[n][n];
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<n;j++)
        {
            char c; cin>>c;
            prefix[i][j]=0;
            if(i!=0)    prefix[i][j]+=prefix[i-1][j];
            if(j!=0)    prefix[i][j]+=prefix[i][j-1];
            if(i!=0 && j!=0)    prefix[i][j]-=prefix[i-1][j-1];
            if(c=='*')  prefix[i][j]++;           
        }           
    }
    while(q--)
    {
        ll a,b,c,d; cin>>a>>b>>c>>d;
        a--,b--,c--,d--;
        ll ans=prefix[c][d];
        if(a!=0 && b!=0)    ans+=prefix[a-1][b-1];
        if(a!=0)    ans-=prefix[a-1][d];
        if(b!=0)    ans-=prefix[c][b-1];
        cout<<ans<<nl;
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