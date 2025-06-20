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

vector<vector<ll>>v(2023,vector<ll>()),pre(2023,vector<ll>());

void solve()
{

    ll n;   cin>>n;
    ll row=sqrtl(2*n);
    while(row*(row+1)<2*n) row++;
    row--;
    ll col=n-((row*(row+1))/2+1);
    
    ll left=0,ans=0;
    for(ll i=row;i>=0;i--)
    {
        ll x=pre[i].size()-1;
        ans+=pre[i][min(col,x)];
        if(col-left>0)  ans-=pre[i][col-left-1];
        left++;           
    }
    cout<<ans<<nl;

}

int32_t main()
{
    FIO

    ll in=1,last=1;;
    for(ll i=0;i<2023;i++)
    {
        for(ll j=0;j<last;j++)
        {
            v[i].pb(in);
            in++;           
        }        
        last++;  
    }
    for(ll i=0;i<2023;i++)
    {
        for(ll j=0;j<v[i].size();j++)
        {
            ll x=v[i][j]*v[i][j];
            if(j!=0)    x+=pre[i][j-1];
            pre[i].pb(x);
        }           
    }

    ll t=1;
    cin>>t;
    for(ll i=1;i<=t;i++)
    {
        // cout<<"Case "<<i<<": ";
        solve();           
    }

    return 0;
}