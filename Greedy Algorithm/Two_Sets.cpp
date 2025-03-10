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
    ll sum=(n*(n+1))/2;
    if(sum&1)   no;
    else
    {
        yes;
        sum/=2;
        vector<ll>v,vv;
        for(ll i=n;i>=1;i--)
        {
            if(i<=sum)
            {
                sum-=i;
                v.pb(i);
            }
            else vv.pb(i);
        }
        cout<<v.size()<<nl;
        for(ll i=0;i<v.size();i++) cout<<v[i]<<" ";           
        cout<<nl;
        cout<<vv.size()<<nl;
        for(ll i=0;i<vv.size();i++) cout<<vv[i]<<" ";           
        cout<<nl;
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