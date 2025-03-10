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
    ll ans = 1e13;
    for (long long int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            ll a = i, b = n / i;
            ll lcm = (a * b) / __gcd(a, b);
            if (lcm == n && max(a, b) < ans)
            {
                ans = max(a, b);
            }
        }
    }
    cout << n / ans << " " << ans << nl;

    return 0;
}