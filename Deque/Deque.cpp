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

        deque<ll>
            d;
    ll t;
    cin >> t;
    ll tt = t;
    while (tt--)
    {
        ll op;
        cin >> op;
        if (op == 0)
        {
            // push
            ll x, val;
            cin >> x >> val;
            if (x == 0)
                d.push_front(val);
            else
                d.push_back(val);
        }
        else if (op == 1)
        {
            // access
            ll x;
            cin >> x;
            cout << d[x] << nl;
        }
        else if (op == 2)
        {
            // delete
            ll x;
            cin >> x;
            if (x == 0)
                d.pop_front();
            else
                d.pop_back();
        }
    }

    return 0;
}