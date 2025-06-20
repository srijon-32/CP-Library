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

const int N=1e6+5;
vector<ll>C(N);
void comb()
{
    C[0]=1;
    for(ll i=1;i<N;i++) C[i]=(i*C[i-1])%mod;    
}

ll biexp(ll a,ll b)
{
    ll res=1;
    while(b>0)
    {
        if(b&1) res=(res*a)%mod;
        a=(a*a)%mod;
        b/=2;
    }
    return res;
}

void solve()
{

    string s;   cin>>s;
    map<char,ll>mp;
    for(char ch:s)  mp[ch]++;
    ll ans=C[s.size()];
    for(auto [a,b]:mp)
    {
        ans=((ans%mod)*biexp(C[b],mod-2))%mod;
    }
    cout<<ans<<nl;

}

int32_t main()
{
    FIO

    comb();
    ll t=1;
    // cin>>t;
    for(ll i=1;i<=t;i++)
    {
        // cout<<"Case "<<i<<": ";
        solve();           
    }

    return 0;
}