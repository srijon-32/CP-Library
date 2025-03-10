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
ll k,n;
vector<ll> v;
bool good(ll mid)
{
    ll sum=0;
    for(ll i=0;i<n;i++) sum+=min(v[i],mid);          
    return sum/k>=mid;
}
int32_t main()
{
    FIO

    cin>>k>>n;
    v.resize(n);
    ll sum=0;
    for (ll i=0;i<n;i++)
    {
        cin>>v[i];  sum+=v[i];
    }   
    ll l=1,r=(sum/k)+1;
    while(l+1<r)
    {
        ll mid=(l+r)/2;
        if(good(mid)) l=mid;
        else r=mid;
    }
    cout<<l<<nl;
    return 0;
}