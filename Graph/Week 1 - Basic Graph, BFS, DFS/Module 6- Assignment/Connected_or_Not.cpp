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

const int N=1e3+5;
ll mat[N][N];

void solve()
{

    ll n,e; cin>>n>>e;
    memset(mat,0,sizeof(mat));
    for(ll i=0;i<e;i++)
    {
        ll a,b; cin>>a>>b;
        mat[a][b]=1;
    }
    for(ll i=0;i<N;i++) mat[i][i]=1;            
    
    ll q;   cin>>q;
    while(q--)
    {
        ll a,b; cin>>a>>b;
        if(mat[a][b]==1)    yes;
        else no;
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