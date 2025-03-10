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
    vector<pair<ll,ll>>v(n);
    multiset<ll>mst;
    set<ll>st;
    for(ll i=0;i<n;i++)
    {
        ll x,y; cin>>x>>y;
        v[i]={x,y};
        if(x==y)
        {
            mst.insert(x);
            st.insert(x);
        }
        
    }
    vector<ll>ser;
    for(auto it:st)
    {
        ser.pb(it);
    }
    sort(all(ser));
    ll sz=ser.size();

    for(ll i=0;i<n;i++)
    {
        if(sz==0) cout<<1;
        else if(v[i].fi!=v[i].sec)
        {
            if(ser[0]<=v[i].fi && ser[sz-1]>=v[i].sec)
            {
                auto it1=lower_bound(all(ser),v[i].fi)-ser.begin();
                auto it2=lower_bound(all(ser),v[i].sec)-ser.begin();
                if(it1==sz || ser[it1]!=v[i].fi)    cout<<1;
                else if(it2==sz || ser[it2]!=v[i].sec)    cout<<1;
                else if(ser[it1]==v[i].fi && ser[it2]==v[i].sec)
                {
                    if(it2-it1==v[i].sec-v[i].fi) cout<<0;
                    else cout<<1;
                }
                else    cout<<1;
            }
            else    cout<<1;
        }
        else
        {
            if(mst.count(v[i].fi)>1)   cout<<0;
            else cout<<1;
        }          
    }
    cout<<nl;

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