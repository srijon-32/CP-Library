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

ll N,D;
vector<ll>V;

pair<ll,ll> good(ld mid)
{
    vector<ld>pre(N+1),preMin(N+1);
    vector<ll>ind(N+1);
    pre[0]=-mid,preMin[0]=-mid,ind[0]=0;
    for(ll i=1;i<=N;i++)
    {
        pre[i]=pre[i-1]+V[i-1]-mid;
        if(pre[i]<preMin[i-1])
        {
            preMin[i]=pre[i];
            ind[i]=i;
        }
        else
        {
            ind[i]=ind[i-1];
            preMin[i]=preMin[i-1];
        }     
    }
    for(ll i=D;i<=N;i++)
    {
        if(pre[i]>=preMin[i-D]) return {ind[i-D],i};              
    }
    return {-1,-1};
}

int32_t main()
{
    FIO

    cin>>N>>D;
    V.resize(N);
    ld l=LONG_MAX,r=LONG_MIN;
    for(ll i=0;i<N;i++)
    {
        cin>>V[i];
        l=min(l,ld(V[i])),r=max(r,ld(V[i]));
    }
    l--,r++;
    pair<ll,ll>ans;
    for(ll i=0;i<100;i++)
    {
        ld mid=(l+r)/2;
        pair<ll,ll>x=good(mid);
        if(x.fi!=-1)
        {
            l=mid;
            ans=x;
        }
        else r=mid;
    }
    cout<<ans.fi+1<<" "<<ans.sec<<nl;

    return 0;
}