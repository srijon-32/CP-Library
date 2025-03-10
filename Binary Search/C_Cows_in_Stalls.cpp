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

ll N,K;
vector<ll>V;

bool good(ll mid)
{
    ll cow=1,start=V[0];
    for(ll i=0;i<N;i++)
    {
        if(V[i]-start>=mid)
        {
            cow++;
            start=V[i];
        }           
    }
    return cow>=K;
}

int32_t main()
{
    FIO

    cin>>N>>K;
    V.resize(N);
    for(ll i=0;i<N;i++) cin>>V[i];
    ll l=0,r=1e10;
    while(l+1<r)
    {
        ll mid=(l+r)/2;
        if(good(mid))   l=mid;
        else    r=mid;
    }
    cout<<l<<nl;
    return 0;
}