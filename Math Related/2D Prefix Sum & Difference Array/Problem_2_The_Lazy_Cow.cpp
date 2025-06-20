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

    freopen("lazy.in","r",stdin);
    freopen("lazy.out","w",stdout);

    ll n,step; cin>>n>>step;
    vector<vector<ll>>v(n,vector<ll>(n));
    for(ll i=0;i<n;i++)
        for(ll j=0;j<n;j++)
            cin>>v[i][j];
    vector<vector<ll>>prefix(n,vector<ll>(n));
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<n;j++)
        {
            prefix[i][j]=v[i][j];
            if(i!=0)    prefix[i][j]+=prefix[i-1][j];
            if(j!=0)    prefix[i][j]+=prefix[i][j-1];
            if(i!=0 && j!=0)    prefix[i][j]-=prefix[i-1][j-1];           
        }           
    }       
    ll mx=LLONG_MIN;    
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<n;j++)
        {
            ll sum=0,x=step;
            for(ll k=i;k>=max(0LL,i-step);k--)
            {
                //sum of [j-steps,j+steps]
                //step will decrease in every iteration
                sum+=prefix[k][min(j+x,n-1)];
                if(k>0)    sum-=prefix[k-1][min(j+x,n-1)];
                if(j-x>0)    sum-=prefix[k][j-x-1];
                if(k>0 && j-x>0)  sum+=prefix[k-1][j-x-1];
                x--;
            }   
            x=step-1;
            for(ll k=i+1;k<=min(n-1,i+step);k++)
            {
                sum+=prefix[k][min(j+x,n-1)];
                if(k>0)    sum-=prefix[k-1][min(j+x,n-1)];
                if(j-x>0)    sum-=prefix[k][j-x-1];
                if(k>0 && j-x>0)  sum+=prefix[k-1][j-x-1];
                x--;
            }
            mx=max(mx,sum);                    
        }           
    }
    cout<<mx<<nl;

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