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

ll k;

bool good(ll mid)
{
    ll x=sqrtl(mid);
    return mid-x>=k;
}

int32_t main()
{
    FIO

    ll t;	cin>>t;
    ll tt=t;
    while (tt--)
    {
        cin>>k;
        ll l=0,r=2e18;
        while(l+1<r)
        {
            ll mid=(l+r)/2;
            if(good(mid))  r=mid;
            else l=mid;
        }
        cout<<r<<nl;      
    }

    return 0;
}