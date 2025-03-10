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

    freopen("cardgame.in","r",stdin);
    freopen("cardgame.out","w",stdout);
    ll n;   cin>>n;
    vector<ll>elsie(n),elsie1,elsie2;
    for (ll i=0;i<n;i++)
    {
        cin>>elsie[i];
        if(i<n/2)   elsie1.pb(elsie[i]);
        else    elsie2.pb(elsie[i]);
    }
    sort(all(elsie)),sort(all(elsie1)),sort(all(elsie2));
    ll j=0,k=0;
    vector<ll>bessie(n),bessie1,bessie2; 
    for(ll i=1;i<=2*n;i++)
    {
        if(i==elsie[j]) j++;
        else    bessie[k]=i,k++;
    }
    for(ll i=0;i<n;i++)
    {
        if(i<n/2)   bessie2.pb(bessie[i]);
        else bessie1.pb(bessie[i]);           
    }
    ll ans=0;
    for(ll i=0,j=0;i<n/2 && j<n/2;j++)
    {
        if(elsie1[i]<bessie1[j])   ans++,i++;           
    }
    for(ll i=0,j=0;i<n/2 && j<n/2;j++)
    {
        if(bessie2[i]<elsie2[j])    ans++,i++;           
    }
    cout<<ans<<nl;
    

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