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

void solve()
{
    freopen("outofplace.in","r",stdin);
    freopen("outofplace.out","w",stdout);
    ll n;   cin>>n;
    vector<ll>v(n);
    for (ll i=0;i<n;i++)
    {
        ll in;  cin>>in;
        if(v.empty())   v.pb(in);
        else if(in!=v.back())   v.pb(in);
    }
    n=v.size();
    ll ans=0;
    for(ll i=0;i<n-1;i++)
    {
        for(ll j=i+1;j<n;j++)
        {
            if(v[i]>v[j])
            {
                swap(v[i],v[i+1]);
                ans++;
            }          
        }           
    }
    cout<<ans<<nl;

}

int32_t main()
{
    FIO

    ll t=1;
    // cin>>t;
    for(ll i=1;i<=t;i++)
    {
        // cout<<"Case "<<i<<": ";
        solve();           
    }

    return 0;
}