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
const int mod = 1000;

ll power(ll a, ll b)
{
    ll result=1;
    while(b>0)
    {
        if(b%2==1)  result=(result*a)%mod;
        a=(a*a)%mod;
        b/=2;
    }
    return result;
}

void solve()
{

    ll a,b; cin>>a>>b;
    ll last=power(a,b);
    ld p=b*log10(a);
    p-=floor(p);
    ll first=pow(10,p)*100.0;
    cout<<first<<"..."<<setw(3)<<setfill('0')<<last<<nl;

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