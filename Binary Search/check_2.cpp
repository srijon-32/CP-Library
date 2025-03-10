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

ll len(ll x)
{
    ll sz=0;
    while(x!=0)
    {
        sz++;
        x/=10;
    }
    return(pow(10,--sz)); 
}

ll count(ll x)
{
    ll sz=0;
    while(x!=0)
    {
        sz++;
        x/=10;
    }
    ll ans=0,base=1;
    for(ll i=0;i<sz-1;i++)
    {
        ans+=base;
        base*=10;           
    }
    return ans;
}

int32_t main()
{
    FIO

    ll n;   cin>>n;
    ll ans=0;
    while(n!=0)
    {
        ll ln=len(n);
        ll mul=n/ln;
        ll total_nine=count(ln);
        ans+=(mul*total_nine);
        n=n%ln;
    }
    cout<<ans<<nl;

    return 0;
}