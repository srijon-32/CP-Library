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
vector<ll>a,b;

bool good(ll mid)
{
    ll x=k;
    for(ll i=0;i<n;i++)
    {
        if(a[i]*mid>b[i]) x-=(a[i]*mid)-b[i];
        if(x<0) return false;          
    }
    return x>=0;
}

int32_t main()
{
    FIO

    cin>>n>>k;
    a.resize(n),b.resize(n);
    for (ll i=0;i<n;i++)    cin>>a[i];
    for (ll i=0;i<n;i++)    cin>>b[i];

    ll l=0,r=1e10;
    while(l+1<r)
    {
        ll mid=(l+r)/2;
        if(good(mid))   l=mid;
        else r=mid;
    }
    cout<<l<<nl;

    return 0;
}