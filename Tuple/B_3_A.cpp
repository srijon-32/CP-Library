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
#define ppb pop_back
#define pf push_front
#define ppf pop_front
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
const int mod = 1e9 + 7;

int32_t main()
{
    FIO

    ll m;   cin>>m;
    string s;
    while(m!=0)
    {
        char c=m%3+'0';
        s.pb(c);
        m/=3;
    }
    vector<ll>ans;
    ll cnt=0;
    for(ll i=0;i<s.size();i++)
    {
        if(s[i]=='1')
        {
            cnt++;
            ans.pb(i);
        }
        else if(s[i]=='2')
        {
            cnt+=2;
            ans.pb(i);
            ans.pb(i);
        }          
    }
    cout<<cnt<<nl;
    for(ll i=0;i<cnt;i++)
    {
        cout<<ans[i]<<" ";           
    }
    return 0;
}