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

ll C[1001][1001];
void pascal_triangle()
{
    for(ll i=0;i<1001;i++)
    {
       C[i][0]=1,C[i][i]=1;
       for(ll j=1;j<i;j++)
       {
            C[i][j]=(C[i-1][j-1]%mod)+(C[i-1][j]%mod);       
       }            
    }
}


void solve()
{

    ll n;   cin>>n;
    vector<ll>v(n);
    for(ll i=0;i<n;i++)	cin>>v[i];
    ll ans=1,box=v[0];
    for(ll i=1;i<n;i++)
    {
        box+=v[i];
        ans=((ans%mod)*(C[box-1][v[i]-1]%mod))%mod;           
    }
    cout<<ans<<nl;
    

}

int32_t main()
{
    FIO

    pascal_triangle();
    ll t=1;
    // cin>>t;
    for(ll i=1;i<=t;i++)
    {
        // cout<<"Case "<<i<<": ";
        solve();           
    }

    return 0;
}