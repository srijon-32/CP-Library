#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 1, 2, 3, 4, 5};
    set<int> s1(v.begin(), v.end()); // or
    set<int> s2;
    s2.insert(v.begin(), v.end());

    set<int> s3({1, 2, 3, 4, 1, 2, 3, 4, 5}); // or
    // set<int> s3 = {1, 2, 3, 4, 1, 2, 3, 4, 5}; // or
    set<int> s4;
    s4.insert({1, 2, 3, 4, 1, 2, 3, 4, 5, 7});

    for (auto val : s4)
    {
        cout << val << " ";
    }
    cout << endl;

    auto ub1 = s4.upper_bound(1); // upper bound    (greater than)
    auto ub2 = s4.upper_bound(3);
    auto lb1 = s4.lower_bound(6); // lower bound    (greater than equal)
    auto lb2 = s4.lower_bound(4);
    cout << *ub1 << " " << *ub2 << " " << *lb1 << " " << *lb2 << endl;
    // for (auto &val : s4)
    // {
    //     cout << val << " ";
    // }
    // cout << endl;

    auto pos1 = s4.find(2);
    auto pos2 = s4.find(4);

    s4.erase(pos1, ++pos2);

    for (int val : s4)
    {
        cout << val << " ";
    }
    cout << endl;

    set<char> st = {'a', 'b'};
    st.insert('a');
    st.insert('b');
    st.insert('c');

    int num_erased = st.erase('b');
    cout << "num_erased= " << num_erased << endl; // key diye direct erase kora jay
    // st.erase(itr_pos);   // itrator er osition diyeo erase kora jay

    // itrator_position ber korar jonno use korte hobe find

    // auto itr = st.find('a');
    // st.erase(itr);   //or

    st.erase(st.find('a'));

    if (st.find('b') == st.end())
        cout << "b not founded." << endl;
    else
        cout << "b founded!" << endl;

    cout << st.count('a') << endl;

    if (st.count('a'))
        cout << "a founded!" << endl;
    else
        cout << "a not founded." << endl;

    for (auto it = st.begin(); it != st.end(); it++)
    {
        cout << *it << endl;
    }
    return 0;
}