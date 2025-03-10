/* SRIJON
        SINGHA
            SAMANTA */
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
#define nl "\n"
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
        k;
    cin >> n >> k;
    vector<ll> v;
    ll last = sqrt(n);
    for (int i = 1; i <= last; i++)
    {
        if (n % i == 0)
        {
            v.push_back(i);
            if (n / i != i)
                v.push_back(n / i);
        }
    }
    sort(v.begin(), v.end());
    if (k > v.size())
        cout << "-1" << nl;
    else
        cout << v[k - 1] << nl;

    return 0;
}