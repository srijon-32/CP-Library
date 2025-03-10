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

    ll n;   cin>>n;
    string s;   cin>>s;
    string ans;
    for(ll i=0;i<n;i+=2)
    {
        string x;   x.pb(s[i]); x.pb(s[i+1]);
        if(x=="GH" && (ans.empty() || ans.back()!='F')) ans.pb('F');
        else if(x=="HG" && (ans.empty() || ans.back()!='T'))    ans.pb('T');
    }
    if(ans.back()=='T') ans.ppb();
    cout<<ans.size()<<nl;

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