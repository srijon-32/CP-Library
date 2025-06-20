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

struct tup  {
    ll l,r,inc;
};

void solve()
{

    ll n,m,q;   cin>>n>>m>>q;
    vector<ll>v(n);
    for(ll i=0;i<n;i++)	cin>>v[i];
    vector<tup>op(m);
    for(ll i=0;i<m;i++) cin>>op[i].l>>op[i].r>>op[i].inc;
    vector<ll>pre_op(m,0);
    while(q--)
    {
        ll a,b; cin>>a>>b;
        pre_op[a-1]++;
        if(b!=m)    pre_op[b]--;
    }
    vector<ll>prefix_op(m);
    for(ll i=0;i<m;i++)
    {
        prefix_op[i]=pre_op[i];
        if(i!=0)    prefix_op[i]+=prefix_op[i-1];
    }
    vector<ll>ans(n,0);
    for(ll i=0;i<m;i++)
    {
        ll increment=prefix_op[i]*op[i].inc;
        ans[op[i].l-1]+=increment;
        if(op[i].r!=n)  ans[op[i].r]-=increment;           
    }
    vector<ll>prefix_ans(n);
    for(ll i=0;i<n;i++)
    {
        prefix_ans[i]=ans[i];
        if(i!=0)    prefix_ans[i]+=prefix_ans[i-1];           
    }
    for(ll i=0;i<n;i++) cout<<prefix_ans[i]+v[i]<<" ";           
    cout<<nl;

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