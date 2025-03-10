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
vector<ll>v;

bool good(ll mid)
{
    ll sum=0;
    for(ll i=0;i<N;i++) sum+=(mid/v[i]);
    return sum>=K;
}

int32_t main()
{
    FIO

    cin>>N>>K;
    v.resize(N);
    ll mn=LONG_MAX;
    for(ll i=0;i<N;i++)
    {
        cin>>v[i];
        mn=min(mn,v[i]);
    }
    ll l=0,r=K*mn;
    while(l+1<r)
    {
        ll mid=(l+r)/2;
        if(good(mid))   r=mid;
        else l=mid;
    }
    cout<<r<<nl;

    return 0;
}