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

    string s;   cin>>s;
    ll ans=0;
    ll n=ll(s.size())-1;
    for(ll bits=0;bits<(1<<n);bits++)
    {
        string x;
        ll sum=0;
        for(ll i=0;i<=n;i++)
        {
            x.pb(s[i]);
            if((i!=n && (bits & (1<<i))) || i==n)
            {
                sum+=stoll(x);
                x.clear();
            }
        }
        ans+=sum;
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