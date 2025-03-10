#include <bits/stdc++.h>
using namespace std;
class cmp
{
public:
    bool operator()(const int &a, const int &b) const
    {
        return (a > b);
    }
};
int32_t main()
{
    // set<int, cmp> st = {1, 2, 3, 4, 5, 1, 2, 3, 4};
    set<int, greater<>> st = {1, 2, 3, 4, 5, 1, 2, 3, 4};
    for (int val : st)
        cout << val << " ";
    cout << endl;
    return 0;
}