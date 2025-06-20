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
    const int random=(long long int)(make_unique<char>().get())
        ^ chrono::high_resolution_clock::now().time_since_epoch().count();
    static unsigned long long splitmix64(unsigned long long x) {
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }
    int operator()(int x) const {
        return splitmix64(x+random);
    }
    int operator()(pair<int,int> x) const {
        unsigned num=(x.first^(x.second>>1));
        return splitmix64(num+random);
    }
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
    ll n;   cin>>n;
    vector<ll>v(n);
    for (ll i=0;i<n;i++)    cin>>v[i];
    gp_hash_table<ll,bool,chash>mp;
    ll sum=0,ans=0;
    for(ll i=0;i<n;i++)
    {
        sum+=v[i];
        if(mp[sum] || sum==0)
        {
            ans++;
            mp.clear();
            sum=0;
        }
        if(sum!=0)  mp[sum]=true;          
    }
    cout<<ans<<nl;
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