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
    vector<ll> v(n);
    for (ll i=0;i<n;i++)    cin>>v[i];
    ll l=0,sum=0;
    ll ans=0;
    for(ll r=0;r<n;r++)
    {
        sum+=v[r];
        while(sum-v[l]>=s)
        {
            sum-=v[l];
            l++;
        }
        if(sum>=s)
        {
            ans+=l+1;
        }        
    }
    cout<<ans<<nl;

    return 0;
}