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

ll calc(ll l,ll r, ll sz)
{
    if(r-l+1<sz)    return 0;
    // if(((r-l+1)&(r-l))==0)    return 0;
    if((r-l+1)%2==0)
    {
        ll mid=(l+r)/2;
        return calc(l,mid,sz)+calc(mid+1,r,sz);
    }
    else
    {
        ll mid=(l+r)/2;
        return mid+calc(l,mid-1,sz)+calc(mid+1,r,sz);
    }
} 

void solve()
{

    ll n,k; cin>>n>>k;
    if(k==1)    cout<<(n*(n+1))/2<<nl;
    else cout<<calc(1,n,k)<<nl;

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