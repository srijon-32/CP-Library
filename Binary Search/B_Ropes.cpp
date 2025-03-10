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

ll n,k;
vector<ll> v(n);

bool good(ld x)
{
    ll sum=0;
    for(ll i=0;i<n;i++) sum+=floor(v[i]/x);
    return sum>=k;           
}
int32_t main()
{
    FIO

    cin>>n>>k;
    v.resize(n);
    for (ll i=0;i<n;i++)    cin>>v[i];
    ld l=0; //good
    ld r=1e8;   //bad
    for(ll i=0;i<=86;i++)
    {
        ld mid=(l+r)/2;
        if(good(mid))   l=mid;
        else r=mid;         
    }
    cout<<fixed<<setprecision(6)<<l<<nl;
    return 0;
}