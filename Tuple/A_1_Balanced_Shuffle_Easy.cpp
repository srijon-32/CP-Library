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
bool cmp(tuple<int, int, char> a, tuple<int, int, char> b)
{
    if (get<0>(a) == get<0>(b))
        return get<1>(a) > get<1>(b);
    else
        return get<0>(a) < get<0>(b);
}
int32_t main()
{
    FIO

        vector<tuple<int, int, char>>
            v;
    char c;
    ll i = 1;
    ll bal = 0;
    while (cin >> c)
    {
        v.push_back({bal, i, c});
        i++;
        if (c == '(')
            bal++;
        else
            bal--;
    }
    sort(v.begin(), v.end(), cmp);
    for (ll k = 0; k < v.size(); k++)
    {
        cout << get<2>(v[k]);
    }

    return 0;
}