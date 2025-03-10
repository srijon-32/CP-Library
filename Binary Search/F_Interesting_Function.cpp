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

    ll t;	cin>>t;
    ll tt=t;
    while (tt--)
    {
        ll left,right;   cin>>left>>right;

        ll ans=right-left;

        ll from_left=0;
        while(left!=0)
        {
            ll ln=len(left);
            ll mul=left/ln;
            ll total_nine=count(ln);
            from_left+=(mul*total_nine);
            left=left%ln;
        }     
        ll from_right=0;
        while(right!=0)
        {
            ll ln=len(right);
            ll mul=right/ln;
            ll total_nine=count(ln);
            from_right+=(mul*total_nine);
            right=right%ln;
        }

        ans+=(from_right-from_left);

        cout<<ans<<nl;    
    }

    return 0;
}