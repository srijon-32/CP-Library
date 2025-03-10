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

        ll n;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    bool flag = false;
    for (int bits = 0; bits < (1 << n); bits++)
    {
        ll sum_of_subset = 0;
        for (int i = 0; i < n; i++)
        {
            if (bits & (1 << i))
                sum_of_subset += v[i];
            else
                sum_of_subset -= v[i];
        }
        if (sum_of_subset % 360 == 0)
        {
            flag = true;
            break;
        }
    }
    if (flag)
        yes;
    else
        no;

    return 0;
}