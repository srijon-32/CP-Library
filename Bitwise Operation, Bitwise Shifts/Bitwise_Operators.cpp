/* SRIJON
        SINGHA
            SAMANTA */
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
#define nl "\n"
#define yes cout << "YES" << nl
#define no cout << "NO" << nl
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
const int mod = 1e9 + 7;

int32_t main()
{
    FIO

        ll n,
        k;
    cin >> n >> k;
    ll a = LONG_MIN;
    ll o = LONG_MIN;
    ll x = LONG_MIN;
    for (ll i = 1; i <= n; i++)
    {
        for (ll j = i + 1; j <= n; j++)
        {
            if ((i & j) < k)
            {
                a = max(a, (i & j));
            }
            if ((i | j) < k)
            {
                o = max(o, (i | j));
            }
            if ((i ^ j) < k)
            {
                x = max(x, (i ^ j));
            }
        }
    }
    cout << a << nl << o << nl << x << nl;

    return 0;
}