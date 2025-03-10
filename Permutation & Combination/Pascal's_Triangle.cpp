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

// max possible size 66 //tried and tested
ll C[66][66];
void pascal_triangle()
{
    C[0][0]=1;
    for(ll i=1;i<=66;i++)
    {
        C[i][0]=C[i][i]=1;
        for(ll j=1;j<i;j++)
        {
            C[i][j]=C[i-1][j-1]+C[i-1][j];           
        }           
    }
}

void solve()
{

    pascal_triangle();
    for(ll i=0;i<=66;i++)
    {
       cout<<i<<" "<<C[66][i]<<nl;            
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