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
        unsigned int n; cin >> n;
        bitset<32> x(n);
        bitset<32> rev(n);
        for (int i = 0; i < 32; i++)
        {
            rev[31 - i] = x[i];
        }
        unsigned int ans = rev.to_ulong();
        cout << ans << nl;
    }

    return 0;
}