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

    
    ll n,s; cin>>n>>s;
    map<ll,ll>mp;
    mp[0]=1;
    ll preSum=0;
    ll ans=0;
    for(ll i=0;i<n;i++)
    {
        ll in;  cin>>in;
        preSum+=in;
        if(mp[preSum-s]) ans++;
        mp[preSum]++;
    }
    cout<<ans<<nl;

    return 0;
}