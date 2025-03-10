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
#define yes cout << "Yes" << nl
#define no cout << "No" << nl
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

    ll k;   cin>>k;
    string s,t; cin>>s>>t;
    if(s==t)    yes;
    else if(abs(int(s.size())-int(t.size()))>1) no;
    else if(int(s.size())==int(t.size()))
    {
        ll ans=0;
        for(ll i=0;i<int(s.size());i++)
        {
            if(s[i]!=t[i])  ans++;              
        }
        if(ans==1)  yes;
        else no;
    }
    else if(int(s.size())<int(t.size()))
    {
        ll ans=0;
        bool ok=true;
        ll j=0;
        for(ll i=0;i<int(t.size());i++)
        {
            if(i==int(t.size())-1 && ok)    break;
           if(s[j]!=t[i])
           {
            if(ok)  ok=false;
            else    ans++,j++;
           }
           else j++;            
        }
        if(ans==0)  yes;
        else no;
    }
    else
    {
        ll ans=0;
        bool ok=true;
        ll j=0;
        for(ll i=0;i<int(s.size());i++)
        {
            if(i==int(s.size())-1 && ok)    break;
           if(s[i]!=t[j])
           {
            if(ok)  ok=false;
            else    ans++,j++;
           }
           else j++;            
        }
        if(ans==0)  yes;
        else no; 
    }

}

int32_t main()
{
    FIO

    ll t=1;
    // cin>>t;
    for(ll i=1;i<=t;i++)
    {
        // cout<<"Case "<<i<<": ";
        solve();           
    }

    return 0;
}