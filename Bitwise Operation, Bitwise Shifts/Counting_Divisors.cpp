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
        ll ans = 0;
        for (int i = 1; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                ans++;
                if (n / i != i)
                    ans++;
            }
        }
        cout << ans << nl;
    }

    return 0;
}