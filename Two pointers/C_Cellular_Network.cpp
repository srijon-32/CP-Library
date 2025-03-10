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

    ll n,m; cin>>n>>m;
    vector<ll> city(n),tow(m);
    for (ll i=0;i<n;i++)    cin>>city[i];
    for (ll i=0;i<m;i++)    cin>>tow[i];
    ll l=0,ans=LONG_MIN;
    for(ll r=0;r<n;r++)
    {   
        while(l+1<m)
        {
            ll a=abs(city[r]-tow[l]);
            ll b=abs(city[r]-tow[l+1]);
            if(a>=b)    l++;
            else break;
        }
        ans=max(ans,abs(city[r]-tow[l]));                
    }
    cout<<ans<<nl;

    return 0;
}