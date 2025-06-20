/* SRIJON
        SINGHA
            SAMANTA */
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
#define nl "\n"
#define all(v) v.begin(), v.end()
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
        ll n;
        cin >> n;
        vector<ll> H(n + 1, 0);
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            if (x <= n)
                H[x]++;
        }
        vector<ll> HH(all(H));
        for (ll i = 1; i <= n; i++)
        {
            for (ll j = i * 2; j <= n; j += i)
            {
                HH[j] += H[i];
            }
        }
        sort(all(HH));
        cout << HH[n] << nl;
    }

    return 0;
}