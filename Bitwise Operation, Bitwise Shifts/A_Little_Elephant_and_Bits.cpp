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
    bool flag = false;
    for (int i = 0; i < s.size() - 1; i++)
    {
        if (s[i] == '0' && !flag)
        {
            flag = true;
        }
        else
            cout << s[i];
    }
    if (flag)
        cout << s[s.size() - 1];

    return 0;
}