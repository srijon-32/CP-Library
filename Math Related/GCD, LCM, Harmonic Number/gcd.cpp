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
ll gcd(ll a, ll b)
{
    ll ans = min(a, b);
    while (ans > 0)
    {
        if (a % ans == 0 && b % ans == 0)
        {
            break;
        }
        ans--;
    }
    return ans;
}
int32_t main()
{
    FIO

        ll a,
        b;
    cin >> a >> b;
    ll ans = gcd(a, b);
    cout << ans;

    return 0;
}