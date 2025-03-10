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
    ll ev=0,od=0;
    for (ll i=0;i<n;i++)
    {
        ll x;   cin>>x;
        if(x&1) od++;
        else ev++;
    }
    if(!od)
    {
        cout<<1<<nl;
        return;
    }
    else if(od<ev)
    {
        cout<<od*2+1<<nl;
        return;
    }
    else
    {
        ll ans=ev*2;
        ll x=od-ev;
        ans+=((x/3)*2);
        x%=3;
        if(x==1)    ans--;
        else if(x==2)   ans++;
        cout<<ans<<nl;
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