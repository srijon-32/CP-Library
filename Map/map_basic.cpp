#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<char, int> mp = {{'a', 1}, {'b', 2}, {'c', 3}};
    cout << mp['c'] << endl;
    cout << mp['a'] << endl;
    cout << mp['u'] << endl;

    auto itr = mp.erase(mp.find('a'));
    cout << itr->first << endl;
    mp.insert({'a', 5});

    int num_erased = mp.erase('c');
    cout << num_erased << endl;
    mp.insert({'c', 20});
    auto up = mp.upper_bound('a');
    auto lb = mp.lower_bound('a');
    cout << "ub= " << up->first << " lb= " << lb->first << endl;
    mp['u'] = 100;
    cout << mp['u'] << endl;

    // mp.insert(pair<char, int>('x', 32));     //or
    // pair<char, int> p1('x', 32);
    // mp.insert(p1); // or
    mp.insert({'x', 32});
    cout << mp['x'] << endl;

    // mp.erase(p1.first);
    // cout << mp[p1.first] << endl;
    cout << "size= " << mp.size() << endl;
    mp.erase('x');
    cout << mp['x'] << endl;
    cout << mp['a'] << endl;

    // mp.clear();
    cout << "empty? =" << boolalpha << mp.empty() << endl;

    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        // it gives a pointer of the pair of map
        // so i have to dereference the pointer then acces the first or second element
        cout << it->first << " " << it->second << endl;
    }
    cout << endl;
    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        // it gives a pointer of the pair of map
        // so i have to dereference the pointer then acces the first or second element
        cout << mp[it->first] << " ";
    }
    cout << endl;

    for (auto &p : mp)
    {
        cout << "{" << p.first << ", " << p.second << "} ";
    }
    cout << endl;
    map<char, int> mp2 = mp;
    // map<char, int> mp2;
    // mp2 = mp;
    // mp2.insert(mp.begin(), mp.end());
    for (auto &p : mp2)
    {
        cout << "{" << p.first << ", " << p.second << "} ";
    }
    cout << endl;
    return 0;
}