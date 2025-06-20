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

    ll n,k; cin>>n>>k;
    set<ll>row,col;
    for(ll i=1;i<=n;i++)    row.insert(i),col.insert(i);
    for(ll i=0;i<k;i++)
    {
        ll r,c; cin>>r>>c;
        if(row.count(r)==1) row.erase(r);
        if(row.count(c)==1) row.erase(c);
        if(col.count(r)==1) col.erase(r);
        if(col.count(c)==1) col.erase(c);
    }
    if(row.empty() && col.empty())
    {
        cout<<0<<nl;
        return;
    }
    ll box=row.size();
    cout<<box<<nl;

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