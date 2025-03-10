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

ll x,y,a,b;

bool good(ll mid)   //p<=q
{
    ll p=(x-a*mid)/(b-a);
    ll q=(y-a*mid)/(b-a);
    if((x-a*mid)<0)  return false;
    return p+q>=mid;
}

int32_t main()
{
    FIO

    ll t;	cin>>t;
    ll tt=t;
    while (tt--)
    {
        cin>>x>>y>>a>>b;

        if(x>y) swap(x,y);
        if(a>b) swap(a,b);

        if(a==b)
        {
            cout<<min(x/a,y/a)<<nl;
            continue;
        }

        ll l=0,r=1e10;
        while(l+1<r)
        {
            ll mid=(l+r)/2;
            if(good(mid))   l=mid;
            else r=mid;
        }
        cout<<l<<nl;      
    }

    return 0;
}