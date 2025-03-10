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

    ll n,q; cin>>n>>q;
    vector<ll> v(n);
    for (ll i=0;i<n;i++)    cin>>v[i];
    while(q--)
    {
        ll x;   cin>>x;
        auto it=lower_bound(all(v),x);
        cout<<it-v.begin()+1<<nl;
    }

    return 0;
}