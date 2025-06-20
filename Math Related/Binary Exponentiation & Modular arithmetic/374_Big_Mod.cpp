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
ll a,b,m;   

ll power(ll a,ll b)
{
    ll result=1;
    while(b>0)
    {
        if(b&1) result=((result%m)*(a%m))%m;
        a=((a%m)*(a%m))%m;
        b/=2;
    }
    return result;
}

void solve()
{

    cin>>b>>m;
    ll result=power(a,b);
    cout<<result<<nl;

}

int32_t main()
{
    FIO

    while(cin>>a)   solve();           
   

    return 0;
}