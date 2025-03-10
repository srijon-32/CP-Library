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

    ll n,m,c;   cin>>n>>m>>c;
    ll prev=n-m;
    vector<ll>a(n),b(m),prefix(m);
    for(ll i=0;i<n;i++) cin>>a[i];
    for(ll i=0;i<m;i++) cin>>b[i];
    for(ll i=0;i<m;i++)
    {
        prefix[i]=b[i];
        if(i!=0)    prefix[i]+=prefix[i-1];
    }
    for(ll i=0;i<n;i++)
    {
        a[i]+=prefix[min(i,m-1)];
        if(i-prev>0)    a[i]-=prefix[i-prev-1];          
    }
    for(ll i=0;i<n;i++) cout<<a[i]%c<<" ";           
    cout<<nl;
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