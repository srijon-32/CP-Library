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

        ll n,
        q;
    cin >> n >> q;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)  cin >> v[i];

    vector<ll> prexor(n);
    prexor[0] = v[0];
    for (ll i = 1; i < n; i++)
    {
        prexor[i] = prexor[i - 1] ^ v[i];
    }
    while (q--)
    {
        ll a, b;
        cin >> a >> b;
        a--, b--;
        ll l;
        if (a == 0)
            l = 0;
        else
            l = prexor[a - 1];

        cout << (l ^ prexor[b]) << nl;
    }

    return 0;
}