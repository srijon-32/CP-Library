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
        int n;
        cin >> n;
        bitset<31> x(n);
        for (int i = 0; i < x.size(); i += 2)
        {
            int a = x[i];
            x[i] = x[i + 1];
            x[i + 1] = a;
        }
        int ans = x.to_ulong();
        cout << ans << nl;
    }

    return 0;
}