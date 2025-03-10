/* SRIJON
        SINGHA
            SAMANTA */
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
#define nl "\n"
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define yes cout << "YES" << nl
#define no cout << "NO" << nl
#define fi first
#define sec second
#define pb push_back
#define ppb pop_back
#define pf push_front
#define ppf pop_front
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
const int mod = 1e9 + 7;

void solve()
{
    ll n, m, k;
    cin >> n >> m >> k;
    ll x=min({n, m, k});
    ll ans = x;
    n -= x, m -= x, k -= x;
    if (n == 0 || k == 0)
    {
        cout << ans << nl;
        return;
    }
    n /= 2;
    ans += min(n, k);
    cout << ans << nl;
}

int32_t main()
{
    FIO

    ifstream inputFile("katryoshka.in");
    if (!inputFile.is_open())   return 0;
    cin.rdbuf(inputFile.rdbuf()); 

    ll t = 1;
    cin >> t;
    for (ll i = 1; i <= t; i++)
    {
        cout << "Case " << i << ": ";
        solve();
    }

    // inputFile.close(); 

    return 0;
}
