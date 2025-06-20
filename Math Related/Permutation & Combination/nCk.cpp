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

ll nCk(ll n,ll k)   // it will work for comperatively bigger number
{
    double c=1;
    for(ll i=1;i<=k;i++)
    {
        c=c*(n-i+1)/i;          
    }
    return ll(c+0.01);
}

// ll nCk(ll n,ll k)   // it will work for little number
// {
//     ll c=1;
//     for(ll i=n;i>=n-k+1;i--)    c*=i;
//     for(ll i=1;i<=k;i++)    c/=i;
//     return c;
// }

void solve()
{

    ll n,k; cin>>n>>k;
    // nCk==nC(n-k)
    ll C=nCk(n,min(k,n-k));
    cout<<C<<nl;

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