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
    vector<ll>sum1(n),sum3(n);
    sum1[0]=v[0];
    for(ll i=1;i<n;i++) sum1[i]=sum1[i-1]+v[i];
    sum3[n-1]=v[n-1];
    for(ll i=n-2;i>=0;i--)  sum3[i]=sum3[i+1]+v[i];

    ll i=0,j=n-1;
    ll ans=0;
    while(i<j)
    {
        if(sum1[i]==sum3[j])
        {
            ans=max(ans,sum1[i]);
            i++,j--;
        }
        else if(sum1[i]<sum3[j]) i++;
        else j--;
    }
    cout<<ans<<nl;

    return 0;
}