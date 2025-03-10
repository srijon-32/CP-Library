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

    freopen("paintbarn.in","r",stdin);
    freopen("paintbarn.out","w",stdout);
    ll n,k; cin>>n>>k;
    vector<vector<ll>>v(1010,vector<ll>(1010));
    for(ll i=0;i<1010;i++)
        for(ll j=0;j<1010;j++)  v[i][j]=0;
                  
    for(ll i=0;i<n;i++)
    {
        ll a,b,c,d; cin>>a>>b>>c>>d;
        v[a][b]++;  v[c][d]++;  v[a][d]--;  v[c][b]--;           
    }
    vector<vector<ll>>prefix(1010,vector<ll>(1010));
    for(ll i=0;i<1010;i++)
    {
        for(ll j=0;j<1010;j++)
        {
           prefix[i][j]=v[i][j];
           if(i!=0 && j!=0) prefix[i][j]-=prefix[i-1][j-1];
           if(i!=0) prefix[i][j]+=prefix[i-1][j];
           if(j!=0) prefix[i][j]+=prefix[i][j-1];            
        }           
    }
    ll ans=0;
    for(ll i=0;i<1010;i++)
        for(ll j=0;j<1010;j++)
            if(prefix[i][j]==k) ans++;           
        
    cout<<ans<<nl;

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