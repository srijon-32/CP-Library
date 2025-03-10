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

bool ok(ll x)
{
    string s=to_string(x);
    for(ll i=1;i<s.size();i++)
    {
       if(s[i]>=s[0])   return false;            
    }
    return true;
}

void solve()
{

    ll  n;  cin>>n;
    ll ans=0;
    for(ll i=1;i<=n;i++)
    {
        if(ok(i))  ans++; 
    }
    cout<<ans<<nl;

}

int32_t main()
{
    FIO

    ll t=1;
    cin>>t;
    for(ll i=1;i<=t;i++)
    {
        // cout<<"Case "<<i<<": ";
        solve();           
    }

    return 0;
}