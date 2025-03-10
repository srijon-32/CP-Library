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

        map<pair<int, int>, string>
            mp;
    ll n;
    cin >> n;
    for (ll i = 0; i < n; i++)
    {
        int a, b;
        string s;
        cin >> a >> b >> s;
        mp[{a, b}] = s;
    }
    ll q;
    cin >> q;
    while (q--)
    {
        int a, b;
        cin >> a >> b;
        cout << mp[{a, b}] << nl;
    }

    return 0;
}