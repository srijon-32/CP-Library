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
vector<pair<ll,ll>> v(n);

bool good(ll mid)
{
    ll sum=0;
    for(ll i=0;i<n;i++)
    {
        ll x=min(mid-v[i].fi,v[i].sec-v[i].fi+1);
        if(x<0) x=0;
        sum+=x;           
    }
    return sum<=k;
}

int32_t main()
{
    FIO

    cin>>n>>k;
    v.resize(n);
    ll l=LONG_MAX,r=LONG_MIN;
    for (ll i=0;i<n;i++)
    {
        cin>>v[i].fi>>v[i].sec;
        l=min(l,v[i].fi),r=max(r,v[i].sec);
    }
    l--;
    r++;
    while(l+1<r)
    {
        ll mid=(l+r)/2;
        if(good(mid))   l=mid;
        else    r=mid;
    }

    cout<<l<<nl;

    return 0;
}