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

int32_t main()
{
    FIO

    ll t;	cin >> t;
    ll tt=t;
    while (tt--)
    {
        ll n,k;   cin>>n>>k;
        map<ll,ll>mp;
        for (ll i=0;i<n;i++)
        {
            ll in;  cin>>in;
            mp[in]++;
        }
        vector<ll>a,b;
        for(auto it:mp)     a.pb(it.fi),b.pb(it.sec);
        ll ans=LONG_MIN,x=0,y=1;
        for(ll i=0;i<a.size();i++)
        {
            if(y<k && a[i]+1==a[i+1])
            {
                x+=b[i];
                y++;
            }
            else
            {
                x+=b[i],y++;
                ans=max(ans,x);
                if(a[i]+1!=a[i+1])
                    x=0,y=1;
                else
                {
                    x=x-a[i-k+1];
                    y--;
                }
            }
        }
        ans=max(ans,x);
        cout<<ans<<nl;
    }

    return 0;
}