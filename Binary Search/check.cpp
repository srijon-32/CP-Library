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

string dec_to_string(ll num)
{
    string ans;
    while(num!=0)
    {
        ans.pb('0'+num%10);
        num/=10;
    }
    return ans;
}

int32_t main()
{
    FIO

    ll ans=0;
    vector<string>v;
    ll start,end;   cin>>start>>end;
    for(ll i=start;i<=end;i+=10)
    {
        string s=dec_to_string(i);
        v.pb(s);
        for(ll i=0;i<s.size();i++)
        {
            if(s[i]!='9')   break;
            ans++;           
        }          
    }
    sort(all(v));
    // for(ll i=0;i<v.size();i++)
    // {
    //     cout<<v[i]<<nl;           
    // }
    cout<<ans<<nl;

    return 0;
}