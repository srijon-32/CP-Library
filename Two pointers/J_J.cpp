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

struct custom_hash {
    static uint64_t splitmix64(uint64_t x) {
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }

    size_t operator()(uint64_t x) const {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};

struct cor{
    ll x,y;
};

int32_t main()
{
    FIO

    ll n,m; cin>>n>>m;
    unordered_map<ll,vector<cor>,custom_hash>ump;
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<m;j++)
        {
            ll in; cin>>in;
            ump[in].pb({i,j});          
        }           
    }
    ll ans=0;
    for(auto it:ump)
    {
        vector<ll>v1,v2;
        for(ll i=0;i<it.sec.size();i++)
        {
            v1.pb(it.sec[i].x),v2.pb(it.sec[i].y);          
        }
        sort(all(v1)),sort(all(v2));
        ll a=0,b=0;
        for(ll i=1;i<v1.size();i++)
        {
            ans+=(v1[i]-v1[i-1])+a+((i-1)*(v1[i]-v1[i-1]));
            a=(v1[i]-v1[i-1])+a+((i-1)*(v1[i]-v1[i-1]));

            ans+=(v2[i]-v2[i-1])+b+((i-1)*(v2[i]-v2[i-1]));
            b=(v2[i]-v2[i-1])+b+((i-1)*(v2[i]-v2[i-1]));         
        }
    }
    cout<<ans*2<<nl;

    return 0;
}