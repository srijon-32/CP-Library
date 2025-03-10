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

int32_t main()
{
    FIO
 
    ll n,s; cin>>n>>s;
    vector<ll> v(n);
    for (ll i=0;i<n;i++)
    {
      cin>>v[i];
    }
    multimap<ll,pair<ll,ll>>mp;
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<n;j++)
        {
            if(i!=j)    mp.insert({(v[i]+v[j]),{i,j}});           
        }           
    }
    pair<ll,ll>a,b;
    bool flag=false;
    for(auto it=mp.begin();it!=mp.end();it++)
    {
        ll need=s-it->fi;
        auto range=mp.equal_range(need);
        for(auto itr=range.fi;itr!=range.sec;itr++)
        {
            if(itr!=it && itr->sec.fi!=it->sec.fi && itr->sec.fi!=it->sec.sec && itr->sec.sec!=it->sec.fi && itr->sec.sec!=it->sec.sec )
            {
                a=it->sec;
                b=itr->sec;
                flag=true;
                break;
            }          
        }
        if(flag) break;
    }
    if(flag) cout<<a.fi+1<<" "<<a.sec+1<<" "<<b.fi+1<<" "<<b.sec+1<<nl;
    else cout<<"IMPOSSIBLE"<<nl;
 
    return 0;
}