/* SRIJON
        SINGHA
            SAMANTA */
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
#define nl "\n"
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define yes cout << "YES" << nl
#define no cout << "NO" << nl
#define fi first
#define sec second
#define pb push_back
#define pf push_front
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
const int mod = 1e9 + 7;

int32_t main()
{
    FIO

        ll n;
    cin >> n;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    multiset<ll> ms;
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        auto it = ms.upper_bound(v[i]);
        if (it == ms.end())
        {
            ans++;
            ms.insert(v[i]);
        }
        else
        {
            ms.erase(it);
            ms.insert(v[i]);
        }
    }
    cout << ans << nl;

    return 0;
}