#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    // YouKnowWho Academy TopicList
    // YouTube: Erichto Algorithms
    long long int x;
    cin >> x;
    bool flag = false;
    // for int it start from 30
    // for long long int it start from 62 then 1 should be 1LL to avoid overflow
    // or to avoid overflow we can write ((x >> i) & 1) equivalent of ( x & (1LL << i))
    for (int i = 62; i >= 0; i--)
    {
        if (((x >> i) & 1) != 0) // be careful about brackets
        {
            cout << "1";
            flag = true;
        }
        else if (flag)  cout << "0";
    }
    return 0;
}