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

ll h,n; 
vector<ll>a,c;

bool good(ll mid)
{
    ll damage=0;
    for(ll i=0;i<n;i++)
    {
        ll x=mid/(c[i]);
        if(mid%(c[i])>0)  x++;
        damage+=(x*a[i]);
        if(damage>=h)   return true;           
    }
    return damage>=h;
}

int32_t main()
{
    FIO

    ll t;	cin>>t;
    ll tt=t;
    while (tt--)
    {
        cin>>h>>n;
        a.resize(n),c.resize(n);
        for(ll i=0;i<n;i++) cin>>a[i];
        for(ll i=0;i<n;i++) cin>>c[i];
        ll l=0,r=5e10;
        while(l+1<r)
        {
            ll mid=(l+r)/2;
            if(good(mid))   r=mid;
            else l=mid;
        }
        cout<<r<<nl;
    }

    return 0;
}