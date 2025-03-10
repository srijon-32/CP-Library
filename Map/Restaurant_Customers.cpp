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
    vector<ll>a(n);
    vector<ll>d(n);
    for(ll i=0;i<n;i++) cin>>a[i]>>d[i];
    sort(all(a)),sort(all(d));
    ll customer=0,ans=1;
    ll i=0,j=0;
    while(i<n && j<n)
    {
        if(a[i]<d[j])
        {
            customer++;
            ans=max(ans,customer);
            i++;
        }
        else
        {
            customer--;
            j++;
        }
    }
    cout<<ans<<nl;
    return 0;
}