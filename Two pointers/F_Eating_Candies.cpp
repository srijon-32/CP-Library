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
        vector<ll> v(n);
        for (ll i=0;i<n;i++)    cin>>v[i];

        ll ans=0,i=0,j=n-1;
        ll alice=0,bob=0;
        bool ok1=true,ok2=true;
        while(i<j)
        {
            if(ok1 && ok2)  alice+=v[i],bob+=v[j];
            else if(ok1)    alice+=v[i];
            else    bob+=v[j];
            if(alice==bob)
            {
                ans=max(ans,i+1+n-j);
                i++,j--;
                ok1=true,ok2=true;
            }
            else if(alice<bob)
            {
                i++;
                ok1=true,ok2=false;
            }
            else
            {
                j--;
                ok1=false,ok2=true;
            }
        }         
        cout<<ans<<nl;   
    }

    return 0;
}