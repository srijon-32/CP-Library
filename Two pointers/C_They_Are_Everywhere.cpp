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

    ll n;   cin>>n;
    string s;   cin>>s;
    set<char>st(all(s));
    ll x=st.size();
    map<char,ll>mp;
    ll ans=LONG_MAX,l=0,num_u=0;
    for(ll r=0;r<n;r++)
    {
        mp[s[r]]++;
        if(mp[s[r]]==1) num_u++;
        while(num_u>=x)
        {
            if(num_u>=x)    ans=min(ans,r-l+1);
            mp[s[l]]--;
            if(mp[s[l]]==0) num_u--;
            l++;
        }         
    }
    cout<<ans<<nl;

    return 0;
}