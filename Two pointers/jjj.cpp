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

int32_t main()
{
    FIO

    ll n;   cin>>n;
    vector<ll> v(n);
    for (ll i=0;i<n;i++)    cin>>v[i];
    ll ans1=0;
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<n;j++)
        {
             ans1+=abs(v[i]-v[j]);          
        }           
    }
    ll ans=0,a=0;
    for(ll i=1;i<n;i++)
    {
        ans+=(v[i]-v[i-1])+a+((i-1)*(v[i]-v[i-1]));
        a=(v[i]-v[i-1])+a+((i-1)*(v[i]-v[i-1]));          
    }
    cout<<ans1<<" "<<ans*2<<nl;

    return 0;
}