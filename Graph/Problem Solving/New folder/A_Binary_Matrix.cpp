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

void solve()
{

    ll n,m; cin>>n>>m;
    vector<string>v(n);
    for(ll i=0;i<n;i++)	cin>>v[i];
    vector<ll>row(n),col(m);
    for(ll i=0;i<n;i++)
    {
        ll x=v[i][0]-'0';
        ll r=x;
        for(ll j=1;j<m;j++)
        {
            x=v[i][j]-'0';
            r^=x;           
        }
        row[i]=r;           
    }
    for(ll i=0;i<m;i++)
    {
        ll x=v[0][i]-'0';
        ll c=x;
        for(ll j=1;j<n;j++)
        {
            x=v[j][i]-'0';
            c^=x;           
        }
        col[i]=c;           
    }
    ll x=accumulate(all(row),0LL);
    ll y=accumulate(all(col),0LL);
    cout<<max(x,y)<<nl;

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