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

        ll n;
    cin >> n;
    ll ans = 0;
    ll i = 0;
    while (n != 0)
    {
        if ((1 << i) > n)
        {
            n -= (1 << (i - 1));
            i = 0;
            ans++;
        }
        else
            i++;
    }
    cout << ans << nl;

    return 0;
}