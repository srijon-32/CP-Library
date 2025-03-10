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

        deque<ll>
            d;
    ll t;
    cin >> t;
    ll tt = t;
    bool flag = 0;
    while (tt--)
    {
        string s;
        cin >> s;
        if (s == "reverse")
        {
            flag ^= 1;
        }
        else if (!flag)
        {
            if (s == "toFront")
            {
                ll x;
                cin >> x;
                d.push_front(x);
            }
            else if (s == "push_back")
            {
                ll x;
                cin >> x;
                d.push_back(x);
            }
            else if (s == "back")
            {
                if (d.empty())
                    cout << "No job for Ada?" << nl;
                else
                {
                    cout << d.back() << nl;
                    d.pop_back();
                }
            }
            else if (s == "front")
            {
                if (d.empty())
                    cout << "No job for Ada?" << nl;
                else
                {
                    cout << d.front() << nl;
                    d.pop_front();
                }
            }
        }
        else
        {
            if (s == "push_back")
            {
                ll x;
                cin >> x;
                d.push_front(x);
            }
            else if (s == "toFront")
            {
                ll x;
                cin >> x;
                d.push_back(x);
            }
            else if (s == "front")
            {
                if (d.empty())
                    cout << "No job for Ada?" << nl;
                else
                {
                    cout << d.back() << nl;
                    d.pop_back();
                }
            }
            else if (s == "back")
            {
                if (d.empty())
                    cout << "No job for Ada?" << nl;
                else
                {
                    cout << d.front() << nl;
                    d.pop_front();
                }
            }
        }
        
    }
    return 0;
}