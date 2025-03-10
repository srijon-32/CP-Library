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

void solve()
{

    string s;   cin>>s;
    if(s.size()==1)
    {
        cout<<-1<<nl;
        return;
    }
    for(ll i=0;i<s.size()-1;i++)
    {
        if(s[i]==s[i+1])
        {
            cout<<s[i]<<s[i+1]<<nl;
            return;
        }           
    }
    if(s.size()==2)
    {
        cout<<-1<<nl;
        return;
    }
    for(ll i=0;i<s.size()-2;i++)
    {
       if(s[i]!=s[i+1] && s[i+1]!=s[i+2] && s[i]!=s[i+2])
       {
            cout<<s[i]<<s[i+1]<<s[i+2]<<nl;
            return;
       }            
    }
    cout<<-1<<nl;

    return;
}

int32_t main()
{
    FIO

    ll t=1;
    cin>>t;
    cin.ignore();
    for(ll i=1;i<=t;i++)
    {
        // cout<<"Case "<<i<<": ";
        solve();           
    }

    return 0;
}