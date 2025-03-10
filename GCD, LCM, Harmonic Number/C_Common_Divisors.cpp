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
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    ll gcd;
    if (n == 1)
        gcd = v[0];
    else
    {
        sort(all(v));
        gcd = __gcd(v[0], v[1]);
        for (int i = 2; i < n; i++)
        {
            gcd = __gcd(gcd, v[i]);
        }
    }
    ll ans = 0;
    ll last = sqrt(gcd);
    for (int i = 1; i <= last; i++)
    {
        if (gcd % i == 0)
        {
            ans++;
            if (gcd / i != i)
                ans++;
        }
    }
    cout << ans << nl;

    return 0;
}