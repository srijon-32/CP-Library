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
ll lcm(ll a, ll b)
{
    ll ans = max(a, b);
    while (ans <= a * b)
    {
        if (ans % a == 0 && ans % b == 0)
        {
            break;
        }
        ans++;
    }
    return ans;
}
int32_t main()
{
    FIO

        ll a,
        b;
    cin >> a >> b;
    ll ans = lcm(a, b);
    cout << ans;

    return 0;
}