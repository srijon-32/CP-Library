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
int32_t main()
{
    FIO

    ll n,s; cin>>n>>s;
    vector<ll> v(n);
    unordered_map<ll,ll,custom_hash>mp;
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
        mp[v[i]]=i;
    }
    for(ll i=0;i<n;i++)
    {
        if(mp.count(s-v[i]) && mp[s-v[i]]!=i)
        {
            cout<<i+1<<" "<<mp[s-v[i]]+1<<nl;
            return 0;
        }        
    }
    cout<<"IMPOSSIBLE"<<nl;
    return 0;
}