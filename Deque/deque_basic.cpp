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
void print_deque(deque<ll> d)
{
    // for (ll i = 0; i < d.size(); i++)
    // {
    //     cout << d[i] << " ";
    // }
    // cout << nl;

    // for (auto it = d.cbegin(); it != d.end(); it++)      // cbegin() means
    // {                                                    // cont itrator
    //     cout << *it << " ";                              // you can't modify it
    // }
    // cout << nl;
    // for (auto it = d.begin(); it != d.end(); it++)
    // {
    //     cout << *it << " ";
    // }
    // cout << nl;
    for (auto it = d.rbegin(); it != d.rend(); it++) // reverse printing
    {
        cout << *it << " ";
    }
    cout << nl;
}
int32_t main()
{
    FIO

        deque<ll>
            d = {1, 2, 3, 4, 5};
    print_deque(d);

    d.push_back(6); // O(1)
    print_deque(d);

    d.push_front(0); // O(1)
    print_deque(d);

    d.pop_front();
    d.pop_back();
    print_deque(d);

    return 0;
}