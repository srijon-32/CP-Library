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

void solve()
{

    ll n,x; cin>>n>>x;
    vector<pair<ll,ll>>a(n);
    vector<ll>b(n);
    for(ll i=0;i<n;i++)
    {
        cin>>a[i].fi;
        a[i].sec=i;           
    }
    for(ll i=0;i<n;i++) cin>>b[i];

    sort(all(a),greater<pair<ll,ll>>()),sort(all(b));

    vector<pair<ll,ll>>c,e;
    vector<ll>d,f;
    for(ll i=0;i<n;i++)
    {
        if(i<x)
        {
            c.pb(a[i]);
            d.pb(b[i]);
        }           
        else
        {
            e.pb(a[i]);
            f.pb(b[i]);
        }
    }
    sort(all(c)),sort(all(d));
    unordered_map<ll,ll,custom_hash>mp;
    for(ll i=0;i<c.size();i++)
    {
        if(c[i].fi<=d[i])
        {
            no;
            return;
        }
        mp[c[i].sec]=d[i];
    }
    sort(all(e)),sort(all(f));
    for(ll i=0;i<e.size();i++)
    {
        if(e[i].fi>f[i])
        {
            no;
            return;
        }          
        mp[e[i].sec]=f[i];
    }
    yes;
    for(ll i=0;i<n;i++) cout<<mp[i]<<" ";
    cout<<nl;
    

}

int32_t main()
{
    FIO

    ll t=1;
    cin>>t;
    for(ll i=1;i<=t;i++)
    {
        // cout<<"Case "<<i<<": ";
        solve();           
    }

    return 0;
}