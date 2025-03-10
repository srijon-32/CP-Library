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
    ll n=s.size();
    map<ll,ll>mp;
    for(ll i=0;i<n;i++)  mp[s[i]]++;
    ll od=0;
    for(auto it:mp)              
    {
        if(it.sec&1)    od++;
        if(od>1)
        {
            cout<<"NO SOLUTION"<<nl;
            return;
        }
    }
    vector<char>ans(n);
    ll j=0;
    for(auto it:mp)
    {
        if(it.sec&1)
        {
            ans[n/2]=it.fi;
            for(ll i=0;i<it.sec/2;i++)
            {
                ans[j]=it.fi,ans[n-1-j]=it.fi;
                j++;            
            }
        }
        else
        {
            for(ll i=0;i<it.sec/2;i++)
            {
                ans[j]=it.fi,ans[n-1-j]=it.fi;
                j++;         
            }
        }
    }
    for(ll i=0;i<n;i++) cout<<ans[i];           


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