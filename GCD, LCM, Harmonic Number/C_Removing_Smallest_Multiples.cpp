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

    ll t;	cin>>t;
    ll tt=t;
    while (tt--)
    {
        ll n;   cin>>n;
        string s;   cin>>s;
        ll ans=0;
        for(ll i=1;i<=n;i++)
        {
            for(ll j=i;j<=n;j+=i)
            {
                if(s[j-1]=='0')
                {
                    ans+=i;
                    s[j-1]='*';
                }
                else if(s[j-1]=='1')    break;                               
            }     
        }
        cout<<ans<<nl;     
    }

    return 0;
}