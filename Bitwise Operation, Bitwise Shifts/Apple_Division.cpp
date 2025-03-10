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
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    ll ans = LONG_MAX;
    for (int mask = 0; mask < (1 << n); mask++)
    {
        ll grpa = 0;
        ll grpb = 0;
        for (int i = 0; i < n; i++)
        {
            if (mask & (1 << i))
                grpa += v[i];
            else
                grpb += v[i];
        }
        ans = min(ans, (abs(grpa - grpb)));
    }
    cout << ans << nl;

    return 0;
}