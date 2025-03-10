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

    ll a,b,c;   cin>>a>>b>>c;
    string s;
    while(a!=0)
    {
        s.pb((a%2)+'0');
        a/=2;
    }
    reverse(all(s));
    if(s.empty())   cout<<0<<" ";
    else    cout<<s<<" ";
    s.clear();
    while(b!=0)
    {
        s.pb((b%2)+'0');
        b/=2;
    }
    reverse(all(s));
    if(s.empty())   cout<<0<<" ";
    else    cout<<s<<" ";
    s.clear();
    while(c!=0)
    {
        s.pb((c%2)+'0');
        c/=2;
    }
    reverse(all(s));
    if(s.empty())   cout<<0<<nl;
    else    cout<<s<<nl;

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