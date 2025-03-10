/* SRIJON
        SINGHA
            SAMANTA */
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
#define nl "\n"
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define yes cout << "YES" << nl
#define no cout << "NO" << nl
#define fi first
#define sec second
#define pb push_back
#define pf push_front
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
const int mod = 1e9 + 7;

int32_t main()
{
    FIO

    string s;
    map<string,string>mp;
    while(getline(cin,s))
    {
        stringstream ss(s);
        string word;
        ll cnt=0;
        while(ss>>word) cnt++;
        
        if(cnt==1)
        {
            if(mp[s]!="")   cout<<mp[s]<<nl;
            else cout<<"eh"<<nl;
        }
        else
        {
            stringstream xx(s);
            string a,b;
            ll i=0;
            while(xx>>word)
            {
                if(!i) a=word;
                else b=word;
                i++;
            }
            mp[b]=a;
        }
    }
    return 0;
}