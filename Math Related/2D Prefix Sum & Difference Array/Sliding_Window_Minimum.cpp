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
    ll a,b,c,d; cin>>a>>b>>c>>d;
    vector<ll>v(n);
    v[0]=a;
    for(ll i=1;i<n;i++) v[i]=(b*v[i-1]+c)%d;
    multiset<ll>mst;
    ll l=0,sum=0;
    for(ll r=0;r<n;r++)
    {
        mst.insert(v[r]);
        if(r-l+1==k)
        {
            sum+=*mst.begin();
            mst.erase(mst.find(v[l]));
            l++;
        }
    }
    cout<<sum<<nl;

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