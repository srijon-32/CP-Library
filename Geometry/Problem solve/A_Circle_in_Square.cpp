/* SRIJON
        SINGHA
            SAMANTA */
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
#define nl "\n"
#define all(v) v.begin(),v.end()
#define yes cout << "YES" << nl
#define no cout << "NO" << nl
const int mod = 1e9 + 7;

void solve()
{ 
    ld r;   cin>>r;
    ld square=4*r*r;
    ld circle=2*acos(0)*r*r;
    cout<<fixed<<setprecision(2)<<square-circle<<nl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);  cout.tie(NULL);

    ll t=1;
    cin>>t;
    for(ll i=1;i<=t;i++)
    {
        cout<<"Case "<<i<<": ";
        solve();
    }         
    
    return 0;
}