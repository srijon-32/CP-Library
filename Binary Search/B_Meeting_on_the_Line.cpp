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

ll n;   
vector<ll>x,d;

bool good(ld mid)
{
    ld left=LONG_MIN,right=LONG_MAX;
    for(ll i=0;i<n;i++)
    {
        left=max(left,x[i]+d[i]-mid );          
        right=min(right,x[i]+mid-d[i]);
        if(left>right)  return false;           
    }
    return true;
}

int32_t main()
{
    FIO

    ll t;	cin>>t;
    ll tt=t;
    while (tt--)
    {
        cin>>n;
        x.resize(n),d.resize(n);
        for (ll i=0;i<n;i++)    cin>>x[i];     
        for (ll i=0;i<n;i++)    cin>>d[i];

        ld l=0,r=2e9;
        for(ll i=0;i<=100;i++)
        {
            ld mid=(l+r)/2;
            if(good(mid))   r=mid;
            else l=mid;
        }
        ld left=LONG_MIN,right=LONG_MAX;
        for(ll i=0;i<n;i++)
        {
            left=max(left,x[i]+d[i]-r );          
            right=min(right,x[i]+r-d[i]);          
        }
        cout<<fixed<<setprecision(6)<<(left+right)/2<<nl;
        
    }   

    return 0;
}