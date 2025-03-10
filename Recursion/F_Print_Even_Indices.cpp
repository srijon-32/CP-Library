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
vector<ll>v;

void print(ll n,vector<ll>v)
{
    if(n==0)
    {
        cout<<v[n]<<" ";
        return;
    }
    else if(n%2==0)
    {
        cout<<v[n]<<" ";
        print(n-1,v);
    }
    else    print(n-1,v);

}

void solve()
{

    cin>>n;
    v.resize(n);
    for (ll i=0;i<n;i++)    cin>>v[i];
    print(n-1,v);

    return;
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