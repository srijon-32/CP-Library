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
        ll n;
        cin >> n;
        ll ans = 1;
        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                ans = i;
                break;
            }
        }
        if (ans == 1)
        {
            cout << "1" << " " << n - 1 << nl;
            continue;
        }
        cout << (n / ans) << " " << (n / ans) * (ans - 1) << nl;
    }

    return 0;
}