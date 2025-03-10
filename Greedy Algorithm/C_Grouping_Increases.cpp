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
    for (ll i=0;i<n;i++)	cin>>v[i];
    vector<ll>ans1={LLONG_MAX},ans2={LLONG_MAX};
    for(ll i=0;i<n;i++)
    {    
        if((v[i]>ans1.back() && v[i]>ans2.back()) || (v[i]<=ans1.back() && v[i]<=ans2.back()))
        {
            if(ans1.back()<=ans2.back())    ans1.pb(v[i]);
            else ans2.pb(v[i]);
        }
        else
        {
            if(ans1.back()>=ans2.back())    ans1.pb(v[i]);
            else ans2.pb(v[i]);
        }
    }
    // cout<<ans1.size()-1<<" "<<ans2.size()-1<<nl;
    ll ans=0;
    for(ll i=0;i<ans1.size()-1;i++)
    {
        if(ans1[i]<ans1[i+1])   ans++;
    }
    for(ll i=0;i<ans2.size()-1;i++)
    {
        if(ans2[i]<ans2[i+1])   ans++;
    }
    if(ans1.empty() || ans2.empty())    ans--;
    cout<<ans<<nl;

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