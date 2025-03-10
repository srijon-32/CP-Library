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
        l, r, x;
    cin >> n >> l >> r >> x;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    ll ans = 0;
    for (int bits = 0; bits < (1 << n); bits++)
    {
        ll sum = 0;
        ll problem = 0;
        ll mx = LONG_MIN;
        ll mn = LONG_MAX;
        for (int i = 0; i < n; i++)
        {
            if (bits & (1 << i))
            {
                mx = max(mx, v[i]);
                mn = min(mn, v[i]);
                problem++;
                sum += v[i];
            }
        }
        if (problem >= 2 && (sum >= l && sum <= r) && (mx - mn >= x))
        {
            ans++;
        }
    }
    cout << ans << nl;

    return 0;
}