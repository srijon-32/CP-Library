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
#define pf push_front
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
const int mod = 1e9 + 7;

int32_t main()
{
    FIO

    vector<ll> v;
    ll val;
    while(cin>>val) v.pb(val);

    map<ll,pair<ll,bool>>mp;
    for(ll i=0;i<v.size();i++)  mp[v[i]].fi++, mp[v[i]].sec=false;

    for(ll i=0;i<v.size();i++)
        if(!mp[v[i]].sec)
        {
            cout<<v[i]<<" "<<mp[v[i]].fi<<nl;
            mp[v[i]].sec=true;
        }

    return 0;
}