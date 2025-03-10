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

        ll t,
        q;
    cin >> t >> q;
    ll tt = t;
    unordered_map<string, ll> mp;
    while (tt--)
    {
        string s;
        ll money;
        cin >> s >> money;
        mp[s] = money;
    }
    while (q--)
    {
        ll op;
        cin >> op;
        if (op == 1)
        {
            string s;
            ll money;
            cin >> s >> money;
            mp[s] += money;
        }
        else
        {
            string s;
            cin >> s;
            cout << mp[s] << nl;
        }
    }

    return 0;
}