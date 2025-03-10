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
    ll l=1,r=n;
    while(l+1<r)
    {
        cout<<"? "<<l<<" "<<r<<endl;
        ll pos; cin>>pos;
        cout<<"? "<<l<<" "<<pos<<endl;
        ll pos1;    cin>>pos1;
        if(pos==pos1)
        {
            if(pos-1==l)    cout<<"! "<<l<<endl;
            else r=pos-1;
        }
        else
        {
            if(pos+1==r)    cout<<"! "<<r<<endl;
            else l=pos+1;
        }
    }
    cout<<"? "<<l<<" "<<r<<endl;
    ll not_ans; cin>>not_ans;
    if(not_ans==l)  cout<<"! "<<r<<endl;
    else cout<<"! "<<l<<endl;
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