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

    ll x,m; cin>>x>>m;
    ll sz=1;
    while(x>(1<<sz))    sz++;
    ll ans=0;
    map<ll,bool>mp;
    for(ll i=1;i<=min(m,x);i++)
    {
        if((x^i)%x==0 || (x^i)%i==0)
        {
            ans++;
            mp[i]=true;
        }          
    }
    for(ll i=min(m,x)+1;i<=m;i++)
    {
         if((x^i)%x==0 || (x^i)%i==0)
        {
            ans++;
            mp[i]=true;
        }              
    }

    cout<<ans<<nl;

    return;
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