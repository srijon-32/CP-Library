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

ll k,n;

bool good(ll mid,ll x)
{
    ll tl=(mid*(mid+1))/2;
    ll down=(x*(x-1))/2;
    return 2*tl-down<=k;
}

void solve()
{

    cin>>k>>n;
    for(ll i=0;i<n;i++)
    {
        ll x;   cin>>x;

        ll sum=(x*(x+1))/2;
        if (sum>=k)
        {
            ll ans=sqrtl(1+8*k)/2;
            while ((ans*(ans+1))/2<k)   ans++;
            cout<<ans<<nl;
            continue;
        }

        ll l=1,r=1e5;
        while(l+1<r)
        {
            ll mid=(l+r)/2;
            if(good(mid,x))   l=mid;
            else r=mid;
        }
        // cout<<l<<nl;
        ll tl=(l*(l+1))/2;
        ll down=(x*(x-1))/2;
        ll total=2*tl-down;

        ll ans=2*l-x+1, rest=k-total;
        // cout<<ans<<" "<<rest<<" "<<r<<nl;
        ans+=(rest/r);
        rest-=(rest/r)*r;
        if(rest%r>0)   ans++;

        cout<<ans<<nl;
        
    }
    
}

int32_t main()
{
    FIO

    freopen("race.in", "r", stdin);
    freopen("race.out", "w", stdout);
    ll t=1;
    // cin>>t;
    for(ll i=1;i<=t;i++)
    {
        // cout<<"Case "<<i<<": ";
        solve();           
    }

    return 0;
}