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

    ll n;   cin >> n;
    string s;
    while (true)
    {
        s += "47";
        sort(s.begin(), s.end());
        if (stoll(s) >= n)
        {
            cout << stoll(s) << nl;
            return 0;
        }
        while (next_permutation(s.begin(), s.end()))
        {
            if (stoll(s) >= n)
            {
                cout << stoll(s) << nl;
                return 0;
            }
        }
    }

    return 0;
}