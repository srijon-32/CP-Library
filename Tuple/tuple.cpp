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

        tuple<int, string>
            person(21, "srijon");
    cout << get<0>(person) << nl;
    cout << get<1>(person) << nl;
    get<1>(person) = "Sumon";
    cout << get<1>(person) << nl;

    // tuple<int, char, bool, string> thing = make_tuple(21, 'M', true, "Srijon");
    // tuple<int, char, bool, string> thing(21, 'M', true, "Srijon");
    tuple<int, char, bool, string> thing;
    thing = make_tuple(21, 'M', true, "Srijon");
    cout << get<0>(thing) << nl;
    cout << get<1>(thing) << nl;
    cout << get<2>(thing) << nl;
    cout << get<3>(thing) << nl;

    tuple<int, int, int> t1(1, 2, 3);
    tuple<int, int, int> t2(4, 5, 6);
    cout << get<0>(t1) << nl;
    cout << get<1>(t1) << nl;
    cout << get<2>(t1) << nl;
    cout << get<0>(t2) << nl;
    cout << get<1>(t2) << nl;
    cout << get<2>(t2) << nl;

    // t1.swap(t2); // swap function of tuple    size have to be same
    swap(t1, t2); // these 2 are same  but will use this one

    cout << get<0>(t1) << nl;
    cout << get<1>(t1) << nl;
    cout << get<2>(t1) << nl;
    cout << get<0>(t2) << nl;
    cout << get<1>(t2) << nl;
    cout << get<2>(t2) << nl;

    // decomposing tuple

    tuple<string, ld> tp("srijon", 21.56);

    string s;
    ld n;
    tie(s, n) = tp; // it cannot convert char to int with ascci
    cout << s << nl << n << nl;

    // tuple concat

    tuple<int, char> tp1(32, 'M');
    tuple<string, ld> tp2("Sumon", 1.22333);

    // tuple<int, char, string, ld> tp3 = tuple_cat(tp1, tp2);
    // or
    auto tp3 = tuple_cat(tp1, tp2);
    cout << get<0>(tp3) << nl;
    cout << get<1>(tp3) << nl;
    cout << get<2>(tp3) << nl;
    cout << get<3>(tp3) << nl;

    return 0;
}