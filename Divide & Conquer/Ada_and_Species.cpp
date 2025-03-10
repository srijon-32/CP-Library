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

struct val
{
    ll a,b,c,d;
};

void solve()
{

    ll n;   cin>>n;
    vector<val>v(n);
    for (ll i=0;i<n;i++)    cin>>v[i].a>>v[i].b>>v[i].c>>v[i].d;
    ll ans=0;
    for(ll i=0;i<n;i++)
    {
        bool ok=true;
        for(ll j=0;j<n;j++)
        {
            if(v[i].a>v[j].a && v[i].b>v[j].b && v[i].c>v[j].c && v[i].d>v[j].d)
            {
                ok=false;
                break;
            }           
        }
        if(ok)
        {
            ans++;
            cout<<v[i].a<<" "<<v[i].b<<" "<<v[i].c<<" "<<v[i].d<<nl;
        }           
    }
    cout<<ans<<nl;


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