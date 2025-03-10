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
        string s;
        cin >> s;
        if (s == "push_back")
        {
            ll x;
            cin >> x;
            d.push_back(x);
        }
        else if (s == "push_front")
        {
            ll x;
            cin >> x;
            d.push_front(x);
        }
        else if (s == "pop_back")
        {
            if (d.empty())
                cout << "Empty" << nl;
            else
            {
                ll a = d.back();
                d.pop_back();
                cout << a << nl;
            }
        }
        else if (s == "pop_front")
        {
            if (d.empty())
                cout << "Empty" << nl;
            else
            {
                ll a = d.front();
                d.pop_front();
                cout << a << nl;
            }
        }
    }

    return 0;
}