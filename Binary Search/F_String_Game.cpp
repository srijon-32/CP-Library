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

string S,T;
vector<ll>V;

string make_string(ll mid)
{
    vector<ll>a(mid+1);
    for(ll i=0;i<=mid;i++)  a[i]=V[i];
    sort(all(a));
    string x;
    ll j=0;
    for(ll i=0;i<S.size();i++)
    {
        if(i!=a[j]) x.pb(S[i]);
        else j++;
    }
    return x;           
}

bool good(ll mid)
{
    string x=make_string(mid);
    ll i=0,j=0;
    while(i<x.size() && j<T.size())
    {
        if(x[i]==T[j]) j++;
        i++;
    }
    return j==T.size();
}

int32_t main()
{
    FIO

    cin>>S>>T;
    V.resize(S.size());
    for (ll i=0;i<S.size();i++)
    {
        cin>>V[i];
        V[i]--;
    }
    ll l=-1,r=S.size();
    while(l+1<r)
    {
        ll mid=(l+r)/2;
        if(good(mid)) l=mid;
        else r=mid;
    }
    cout<<l+1;

    return 0;
}