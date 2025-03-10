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

    ll n;   cin>>n;

    vector<pair<ll,ll>>v(n);
    set<ll>st;
    for(ll i=0;i<n;i++)
    {
        cin>>v[i].fi>>v[i].sec;
        st.insert(v[i].fi),st.insert(v[i].fi+1);
        st.insert(v[i].sec),st.insert(v[i].sec+1);           
    }
    vector<ll>compress;
    for(ll x:st)    compress.pb(x);
    unordered_map<ll,ll,custom_hash>mp;
    for(ll i=0;i<compress.size();i++)   mp[compress[i]]=i;
    for(ll i=0;i<n;i++) v[i].fi=mp[v[i].fi],v[i].sec=mp[v[i].sec];

    vector<ll>dif(compress.size(),0); 
    for(ll i=0;i<n;i++)
    {
        dif[v[i].fi]++;
        if(v[i].sec+1!=dif.size())  dif[v[i].sec+1]--;
    }
    vector<ll>prefix(dif.size());
    for(ll i=0;i<dif.size();i++)
    {
        prefix[i]=dif[i];
        if(i!=0)    prefix[i]+=prefix[i-1];
    }
    set<ll>not_pos;
    for(ll i=0;i<prefix.size();i++)
        if(prefix[i]<2) not_pos.insert(i);
    if(not_pos.empty())
    {
        cout<<1<<nl;
        return;
    }
    for(ll i=0;i<n;i++)
    {
        ll x=*not_pos.lower_bound(v[i].fi);
        if(x>v[i].sec)
        {
            cout<<i+1<<nl;
            return;
        }           
    }
    cout<<-1<<nl;

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