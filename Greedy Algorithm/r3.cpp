/* SRIJON
        SINGHA
            SAMANTA */
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
#define nl "\n"
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define yes cout << "YES" << nl
#define no cout << "NO" << nl
#define fi first
#define sec second
#define pb push_back
#define ppb pop_back
#define pf push_front
#define ppf pop_front
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
const int mod = 1e9 + 7;

void solve()
{
    ll k, n;
    cin >> k >> n;

    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;

        ll total = (x * (x + 1)) / 2;

        if (total >= k)
        {
            ll ans = sqrtl(1 + 8 * k) / 2; // Correct formula
            while ((ans * (ans + 1)) / 2 < k)
                ans++;
            cout << ans << nl;
        }
        else
        {
            ll ans = x;
            ll rest = k - total - 1;
            ans++;
            ll abc = (1LL * (2 * x + 1) * (2 * x + 1)) + (4 * rest); // Prevent overflow
            ll step = (sqrtl(abc) - (2 * x + 1)) / 2;
            ll y = step + x;
            ll len = (y * (y + 1)) - (x * (x + 1));
            if (len == 0)
            {
                if (rest > 0)
                    ans++;
                cout << ans << nl;
            }
            else
            {
                cout<<step<<nl;
                ll nofstep = rest / len;
                ans += (nofstep * step) * 2;
                total += (x + len * 2);
                if (total < k)
                    ans += (k - total) / x;
                cout << ans << nl;
            }
        }
    }
}

int32_t main()
{
    FIO
    // freopen("race.in", "r", stdin);  // Read from input file
    // freopen("race.out", "w", stdout); // Write to output file

    ll t=1;
    // cin >> t;
    for (ll i = 1; i <= t; i++)
    {
        solve();
    }

    return 0;
}
