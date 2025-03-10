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
    vector<ll>v(n);
    for(ll i=0;i<n;i++)	cin>>v[i];
    vector<ll>x(n,0);
    if(v==x)
    {
        no;
        return;
    }
    yes;
    vector<pair<ll,ll>>ans;
    ll start=1;
    for(ll i=0;i<n;i++)
    {
        if(v[i]!=0)
        {
            ans.pb({start,i+1});
            start=i+2;
        }           
    }
    if(ans[ans.size()-1].sec!=n)   ans[ans.size()-1].sec=n; 
    cout<<ans.size()<<nl;
    for(ll i=0;i<ans.size();i++)
    {
        cout<<ans[i].fi<<" "<<ans[i].sec<<nl;
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