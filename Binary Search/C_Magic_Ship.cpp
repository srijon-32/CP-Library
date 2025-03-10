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

struct point{
    ll x,y;
};
struct direction{
    ll u,d,l,r;
};

ll n,total_x,total_y;
string s;      
point initial,final;
map<ll,direction>mp;

bool good(ll day)
{
    ll x=day/n,y=day%n;
    ll after_s_y=((mp[n].u*x)+mp[y].u)-((mp[n].d*x)+mp[y].d)+initial.y;
    ll after_s_x=((mp[n].r*x)+mp[y].r)-((mp[n].l*x)+mp[y].l)+initial.x;
    return abs(final.x-after_s_x)+abs(final.y-after_s_y)<=day;
}

int32_t main()
{
    FIO

    cin>>initial.x>>initial.y>>final.x>>final.y;
    cin>>n>>s;
    mp.clear();
    for(ll i=0;i<n;i++)
    {
        mp[i+1].u=mp[i].u;           
        mp[i+1].d=mp[i].d;           
        mp[i+1].l=mp[i].l;
        mp[i+1].r=mp[i].r;      
        if(s[i]=='U')   mp[i+1].u=mp[i].u+1;           
        else if(s[i]=='D')   mp[i+1].d=mp[i].d+1;           
        else if(s[i]=='L')   mp[i+1].l=mp[i].l+1;
        else mp[i+1].r=mp[i].r+1;           
    }

    ll l=-1,r=1e18;
    while(l+1<r)
    {
        ll mid=(l+r)/2;
        if(good(mid))   r=mid;
        else l=mid;
    }
    if(r==1e18) r=-1;
    cout<<r<<nl;

    return 0;
}