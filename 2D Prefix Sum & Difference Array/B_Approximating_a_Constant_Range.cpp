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
    ll ans=LLONG_MIN,l=0;
    multiset<ll>mst;
    for(ll r=0;r<n;r++)
    {
        mst.insert(v[r]);
        ll mx=*(--mst.end()),mn=*mst.begin();
        while(mx-mn>1)
        {
            mst.erase(mst.find(v[l]));
            l++;
            mx=*(--mst.end()),mn=*mst.begin();
        }
        ans=max(ans,r-l+1);
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