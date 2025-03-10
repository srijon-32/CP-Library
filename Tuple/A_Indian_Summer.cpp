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

        ll n;
    cin >> n;
    map<tuple<string, string>, int> mp;
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        string a, b;
        cin >> a >> b;
        if (!mp[tuple(a, b)])
            ans++;
        mp[tuple(a, b)]++;
    }
    cout << ans << nl;

    return 0;
}