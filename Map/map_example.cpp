#include <bits/stdc++.h>
using namespace std;
int main()
{
    string test = "Hello world my name is srijon! adlkjasjkrhaefhb";
    map<char, int> freq;
    for (int i = 0; i < test.size(); i++)
    {
        freq[test[i]]++;
    }
    cout << freq['a'] << endl;
    cout << freq['x'] << endl;
    cout << freq['H'] << endl;
    for (auto it = freq.begin(); it != freq.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }
    return 0;
}