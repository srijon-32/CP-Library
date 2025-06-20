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

void solve()
{

    ll n,k,q;   cin>>n>>k>>q;
    vector<ll>v(200005,0);
    for(ll i=0;i<n;i++)
    {
        ll l,r; cin>>l>>r;
        v[l]++,v[r+1]--;           
    }
    vector<ll>prefix(200005);
    for(ll i=0;i<200005;i++)
    {
        prefix[i]=v[i];
        if(i!=0)    prefix[i]+=prefix[i-1];          
    }
    vector<ll>vv(200005,0);
    for(ll i=0;i<200005;i++)
        if(prefix[i]>=k)    vv[i]=1;           
    
    vector<ll>ans(200005,0);
    for(ll i=0;i<200005;i++)
    {
        ans[i]=vv[i];
        if(i!=0)    ans[i]+=ans[i-1];          
    }
    while(q--)
    {
        ll l,r; cin>>l>>r;
        ll anss=ans[r];
        if(l!=0)    anss-=ans[l-1];
        cout<<anss<<nl;
    }

}

int32_t main()
{
    FIO

    ll t=1;
    // cin>>t;
    for(ll i=1;i<=t;i++)
    {
        // cout<<"Case "<<i<<": ";
        solve();           
    }

    return 0;
}