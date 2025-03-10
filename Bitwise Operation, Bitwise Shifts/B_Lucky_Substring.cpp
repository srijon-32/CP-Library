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

        string s;
    cin >> s;
    ll cnt4 = 0;
    ll cnt7 = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '4')
            cnt4++;
        if (s[i] == '7')
            cnt7++;
    }
    if (!cnt4 && !cnt7)
        cout << "-1" << nl;
    else if (cnt7 > cnt4)
        cout << "7" << nl;
    else
        cout << "4" << nl;
    return 0;
}