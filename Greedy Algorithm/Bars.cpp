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

    ll x,n; cin>>x>>n;
    vector<ll>v(n);
    for (ll i=0;i<n;i++)	cin>>v[i];
    for(ll bits=0;bits<(1<<n);bits++)
    {
        ll sum=0;
        for(ll i=0;i<n;i++)
        {
            if(bits & (1<<i))  sum+=v[i];           
        }
        if(sum==x)
        {
            yes;
            return;
        }
    }
    no;

}

int32_t main()
{
    FIO

    ll t=1;
    cin>>t;
    for(ll i=1;i<=t;i++)
    {
        // cout<<"Case "<<i<<": ";
        solve();           
    }

    return 0;
}