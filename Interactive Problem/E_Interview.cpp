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

    ll n;   cin>>n;
    vector<ll>v(n);
    for(ll i=0;i<n;i++)	cin>>v[i];
    vector<ll>pre(n);
    pre[0]=v[0];
    for(ll i=1;i<n;i++) pre[i]=pre[i-1]+v[i];
    ll l=0,r=n;
    while(l+1<r)
    {
        ll mid=(l+r)/2;
        cout<<"? "<<mid-l<<" ";
        cout.flush();
        for(ll i=l;i<mid;i++)
        {
            cout<<i+1<<" ";
            cout.flush();
        }
        cout<<endl;
        ll w;   cin>>w;
        ll x=pre[mid-1];
        if(l!=0)    x-=pre[l-1];
        if(x==w)   l=mid;
        else r=mid;
    }
    cout<<"! "<<l+1<<endl;

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