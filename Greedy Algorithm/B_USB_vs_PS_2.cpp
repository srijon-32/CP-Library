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

    ll u,p,b;   cin>>u>>p>>b;
    ll m;   cin>>m;
    priority_queue<ll,vector<ll>,greater<ll>>us,ps;
    for(ll i=0;i<m;i++)
    {
        ll cost;    string s;
        cin>>cost>>s;
        if(s=="USB") us.push(cost);
        else ps.push(cost); 
    }
    ll ans=0;
    while(!us.empty() && u!=0)
    {
        ans+=us.top();
        us.pop();
        u--;
    }
    while(!ps.empty() && p!=0)
    {
        ans+=ps.top();
        ps.pop();
        p--;
    }
    priority_queue<ll,vector<ll>,greater<ll>>all;
    while(!us.empty())
    {
        all.push(us.top());
        us.pop();
    }
    while(!ps.empty())
    {
        all.push(ps.top());
        ps.pop();
    }
    while(!all.empty() && b!=0)
    {
        ans+=all.top();
        all.pop();
        b--;
    }
    cout<<m-int(all.size())<<" "<<ans<<nl;

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