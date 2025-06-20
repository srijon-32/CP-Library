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

        ll t;
    cin >> t;
    ll tt = t;
    while (tt--)
    {
        ll l, r;
        cin >> l >> r;
        if (l * 2 <= r)
            cout << l << " " << l * 2 << nl;
        else
            cout << "-1" << " " << "-1" << nl;
    }

    return 0;
}