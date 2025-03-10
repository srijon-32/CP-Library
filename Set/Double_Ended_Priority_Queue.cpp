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
#define pf push_front
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
    multiset<ll> ms;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        ms.insert(x);
    }
    while (q--)
    {
        ll op;
        cin >> op;
        if (op == 0)
        {
            ll x;
            cin >> x;
            ms.insert(x);
        }
        else if (op == 1)
        {
            cout << *ms.begin() << nl;
            ms.erase(ms.begin());
        }
        else
        {
            cout << *(--ms.end()) << nl;
            ms.erase(--(ms.end()));
        }
    }

    return 0;
}