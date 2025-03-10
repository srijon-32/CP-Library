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

ll n,k;
vector<ll>v;
bool good(ll mid)
{
    ll cnt=0,sum=0;
    for(ll i=0;i<n;i++)
    {
        if(v[i]>mid)    return false;
        if(sum+v[i]<=mid)   sum+=v[i];
        else
        {
            cnt++;
            sum=v[i];
        }          
    }
    if(sum!=0)   cnt++;
    return cnt<=k;
}

int32_t main()
{
    FIO

    cin>>n>>k;
    v.resize(n);
    for(ll i=0;i<n;i++) cin>>v[i];

    ll l=0,r=1e15;
    while(l+1<r)
    {
        ll mid=(l+r)/2;
        if(good(mid))  r=mid;
        else l=mid;
    }
    cout<<r<<nl;           

    return 0;
}