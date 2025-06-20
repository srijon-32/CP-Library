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

    vector<ll>v(1e6+5,0);
    for(ll i=1;i<1e6+5;i++)
    {
        for(ll j=i;j<1e6+5;j+=i)
        {
            v[j]+=i;           
        }
    }
    ll t;	cin>>t;
    while (t--)
    {
        ll x;   cin>>x;
        if(v[x]-x==x)   cout<<"perfect"<<nl;
        else if(v[x]-x<x)   cout<<"deficient"<<nl;
        else cout<<"abundant"<<nl;
    }

    return 0;
}