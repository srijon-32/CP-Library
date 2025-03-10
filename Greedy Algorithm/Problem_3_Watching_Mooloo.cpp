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

    ll n,k; cin>>n>>k;
    vector<ll>v(n);
    for (ll i=0;i<n;i++)    cin>>v[i];
    bool sta=true;
    ll start,ans=0;
    for(ll i=0;i<n-1;i++)
    {
        if(sta)
        {
            sta=false;
            start=v[i];
        }
        if(v[i+1]-v[i]>k)
        {
            ans+=(v[i]-start+1+k);
            sta=true;
        }
    }
    if(sta) ans+=(1+k);
    else    ans+=(v[n-1]-start+1+k);
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