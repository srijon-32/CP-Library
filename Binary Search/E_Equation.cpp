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
bool good(ld mid,ld c)
{
    return mid*mid+sqrt(mid)>=c;
}
int32_t main()
{
    FIO

    ld c;   cin>>c;
    ld l=0,r=1e5;
    for(ll i=0;i<100;i++)
    {
        ld mid=(l+r)/2;
        if(good(mid,c)) r=mid;
        else l=mid;              
    }
    cout<<fixed<<setprecision(6)<<r<<nl;

    return 0;
}