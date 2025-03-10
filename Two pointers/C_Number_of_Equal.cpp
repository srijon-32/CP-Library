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

    ll n,m; cin>>n>>m;
    vector<ll>a(n),b(m);
    for(ll i=0;i<n;i++) cin>>a[i];
    for(ll i=0;i<m;i++) cin>>b[i];

    ll i=0,j=0,ans=0;
    while(i<n)
    {
        ll x=1,y=a[i],z=0;
        while(i+1!=n && a[i]==a[i+1])   x++,i++;
        i++;
        while(j!=m && y>=b[j])
        {
            if(y==b[j]) z++;
            j++;
        }
        ans+=x*z;
    }
    cout<<ans<<nl;

    return 0;
}
