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
        ll ans;
        ll dif = INT_MIN;
        for (int i = l; i <= r; i++)
        {
            string s = to_string(i);
            int mx = INT_MIN;
            int mn = INT_MAX;
            for (int i = 0; i < s.size(); i++)
            {
                mx = max(mx, s[i] - '0');
                mn = min(mn, s[i] - '0');
            }
            ll x = mx - mn;
            if (x == 9)
            {
                ans = i;
                break;
            }
            if (x > dif)
            {
                ans = i;
                dif = mx - mn;
            }
        }
        cout << ans << nl;
    }

    return 0;
}