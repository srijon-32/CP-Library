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

        ll l,
        r;
    cin >> l >> r;
    int mx = INT_MIN;
    for (int i = l; i <= r; i++)
    {
        for (int j = l; j <= r; j++)
        {
            mx = max(mx, i ^ j);
        }
    }
    cout << mx << nl;

    return 0;
}