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
#define yes cout << "Yes" << nl
#define no cout << "No" << nl
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

struct val
{
    ll r,c;
    char s;
};

void solve()
{

    ll n,m; cin>>n>>m;
    ll mrb=LLONG_MIN,mcb=LLONG_MIN;
    ll rb=LLONG_MIN,cb=LLONG_MIN;
    bool ok=false;
    vector<val>v(m);
    for(ll i=0;i<m;i++)
    {
        ll a,b; cin>>a>>b;
        char c; cin>>c;
        v[i]={a,b,c};
        
        if(c=='B')
        {
            if(a>mrb)
            {
                mrb=a;
                mcb=b;
            }
            if(b>cb)
            {
                cb=b;
                rb=a;
            }
        }
    }
    for(ll i=0;i<m;i++)
    {
        if(v[i].s=='W')
        {
            if(mrb>=v[i].r)
            {
                if(mcb>=v[i].c)
                {
                    no;
                    return;
                }
            }
            if(cb>=v[i].c)
            {
                if(rb>=v[i].r)
                {
                    no;
                    return;
                }
            }
    
            if(cb>=v[i].c)
            {
                if(rb>=v[i].r)
                {
                    no;
                    return;
                }
            }
        }           
    }
    // cout<<"row based: "<<nl;
    // cout<<mrw<<" "<<mcw<<nl;
    // cout<<mrb<<" "<<mcb<<nl;
    // cout<<"coloumn based"<<nl;
    // cout<<rw<<" "<<cw<<nl;
    // cout<<rb<<" "<<cb<<nl;
    yes;

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