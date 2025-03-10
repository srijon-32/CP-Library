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
vector<ll>A,B;

bool good(ld mid)
{
    vector<ld>pre(N);
    for(ll i=0;i<N;i++)
        pre[i]=A[i]-B[i]*mid;
    
    sort(rall(pre));
    ld sum=0;
    for(ll i=0;i<K;i++)
        sum+=pre[i];          
    
    return sum>=0;
}

int32_t main()
{
    FIO

    cin>>N>>K;
    A.resize(N),B.resize(N);
    for(ll i=0;i<N;i++) cin>>A[i]>>B[i];                   
    
    ld l=-1,r=1e18;

    for(ll i=0;i<100;i++)
    {
        ld mid=(l+r)/2;
        if(good(mid))   l=mid;
        else r=mid;
    }

    cout<<fixed<<setprecision(6)<<l<<nl;

    return 0;
}