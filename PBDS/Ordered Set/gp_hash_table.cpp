/* SRIJON
        SINGHA
            SAMANTA */
#include <bits/stdc++.h>
#include <bits/extc++.h>
using namespace std;
using namespace __gnu_pbds;
typedef long long int ll;
typedef long double ld;
#define nl "\n"
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define yes cout << "YES" << nl
#define no cout << "NO" << nl
const int mod = 1e9 + 7;

struct chash {
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
    size_t operator()(pair<uint64_t,uint64_t> x) const {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x.first + FIXED_RANDOM)^(splitmix64(x.second + FIXED_RANDOM) >> 1);
    }
    //for vector I can also do the similarly with lower collision
    long long operator()(string s) const {
        const int p = 31;  
        //for only lowercase p=31,for lowercase+uppercase p=53
        const int m = 1e9 + 9;
        long long hash_value = 0;
        long long p_pow = 1;
        for (char c : s) {
            hash_value = (hash_value + (c - 'a' + 1) * p_pow) % m;
            p_pow = (p_pow * p) % m;
        }
        return hash_value;
    }
};

void solve()
{ 
    // first key can be ll , pair, string ;
    // if i need any other key i have to create new hash value for that
    gp_hash_table<pair<ll,ll>,ll,chash>mp;
    mp[{1,2}]=2;
    mp[{2,3}]=3;
    cout<<mp[{1,2}]<<nl;
    cout<<mp[{2,3}]<<nl;
    cout<<mp[{5,3}]<<nl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);                    
    cout.tie(NULL);

    ll t=1;
    cin>>t;
    for(ll i=1;i<=t;i++)
    {
        // cout<<"Case "<<i<<": ";
        solve();           
    }

    return 0;
}