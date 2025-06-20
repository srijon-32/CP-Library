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
    
    vector<ll>knight(10000+2);
    knight[0]=0,knight[1]=6,knight[2]=28,knight[3]=96;
    for(ll i=5;i<=10000;i++)
    {
        ll in=0;
    
        ll x=i-4;
        x=(x*x);
        ll y=(i*i);
        y-=9;
        ll a=(x*y);
        in+=a;
        // if(i==5) cout<<x<<" "<<y<<nl;
        
        y=(i*i);
        y-=3;
        a=y*4;
        in+=a;
        // if(i==5) cout<<4<<" "<<y<<nl;
    
        y=(i*i);
        y-=4;
        a=8*y;
        in+=a;
        // if(i==5) cout<<8<<" "<<y<<nl;
    
        ll pos=i*2+(i-2)*2;
        pos-=8;
        y=(i*i);
        y-=5;
        a=pos*y;
        in+=a;
        // if(i==5) cout<<pos<<" "<<y<<nl;
    
        ll len=i-2;
        pos=len*2+(len-2)*2;
        pos-=4;
        y=(i*i);
        y-=7;
        a=pos*y;
        in+=a;
        // if(i==5) cout<<pos<<" "<<y<<nl;
    
        knight[i-1]=in/2;
    }
    ll x;   cin>>x;
    for(ll i=0;i<x;i++)
    {
        cout<<knight[i]<<nl;            
    }
    
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