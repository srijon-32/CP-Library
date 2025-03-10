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
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
const int mod = 1e9 + 7;

string s;
ll a=0,b=0,c=0;
ll nb,ns,nc;
ll pb,ps,pc;
ll rub;   

bool good(ll mid)
{
    bool flag=true;
    ll tk=rub;
    ll needb=a*mid,needs=b*mid,needc=c*mid;
    if(nb<needb)
    {
        needb-=nb;
        ll needtk=needb*pb;
        if(needtk<=tk)  tk-=needtk;
        else flag=false;
    }
    if(ns<needs)
    {
        needs-=ns;
        ll needtk=needs*ps;
        if(needtk<=tk)  tk-=needtk;
        else flag=false;
    }
    if(nc<needc)
    {
        needc-=nc;
        ll needtk=needc*pc;
        if(needtk<=tk)  tk-=needtk;
        else flag=false;
    }
    return flag;
}
int32_t main()
{
    FIO

    cin>>s;
    for(ll i=0;i<s.size();i++)
    {
        if(s[i]=='B')   a++;
        else if(s[i]=='S')  b++;
        else c++;   
    }
    cin>>nb>>ns>>nc;
    cin>>pb>>ps>>pc;
    cin>>rub;
    
    ll l=0,r=1e13;
    while(l+1<r)
    {
        ll mid=(l+r)/2;
        if(good(mid))   l=mid;
        else r=mid;
    }
    cout<<l<<nl;
    return 0;
}