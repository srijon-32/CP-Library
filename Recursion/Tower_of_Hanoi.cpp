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

void TOH(ll n,ll a,ll b,ll c)
{
    if(n==1)
    {
        cout<<a<<" "<<c<<nl;
        return;
    }
    TOH(n-1,a,c,b);
    cout<<a<<" "<<c<<nl;
    TOH(n-1,b,a,c);
}

void solve()
{

    ll n;   cin>>n;
    cout<<(1<<n)-1<<nl;
    TOH(n,1,2,3);

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