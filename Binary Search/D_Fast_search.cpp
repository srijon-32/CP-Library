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

int32_t main()
{
    FIO

    ll n;   cin>>n;
    vector<ll> v(n);
    for (ll i=0;i<n;i++)    cin>>v[i];
    sort(all(v));
    ll q;   cin>>q;
    while(q--)
    {
        ll l,r; cin>>l>>r;
        ll x=-1,y=n;
        while(x+1<y)
        {
            ll mid=(x+y)/2;
            if(v[mid]<l) x=mid;
            else y=mid;
        }
        ll m=-1,o=n;
        while(m+1<o)
        {
            ll mid=(m+o)/2;
            if(v[mid]<=r)   m=mid;
            else o=mid;
        }
        cout<<m-y+1<<" ";
    }
    return 0;
}