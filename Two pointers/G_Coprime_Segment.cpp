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

struct Stack
{
    vector<ll>s,gc;
    void push(ll x)
    {
        s.pb(x);
        if(gc.empty())  gc.pb(::gcd(0,x));
        else    gc.pb(::gcd(gc.back(),x));
    }
    ll pop()
    {
        ll res=s.back();
        s.ppb();
        gc.ppb();
        return res;
    }
    bool empty()
    {
        return s.empty();
    }
    ll gcd()
    {
        return gc.back();
    }
};
 
Stack s1,s2;

void add(ll x)
{
    s2.push(x);
}
void remove()
{
    if(s1.empty())
    {
        while(!s2.empty())
        {
            s1.push(s2.pop());
        }
    }
    s1.pop();
}
bool good()
{
    ll gd;
    if(s1.empty())  gd=s2.gcd();
    else if(s2.empty()) gd=s1.gcd();
    else    gd=gcd(s1.gcd(),s2.gcd());
    return gd==1;
}
int32_t main()
{
    FIO

    ll n;   cin>>n;
    vector<ll> v(n);
    for (ll i=0;i<n;i++)    cin>>v[i];

    ll ans=LONG_MAX,l=0;
    for(ll r=0;r<n;r++)
    {
        add(v[r]);
        if(good())   ans=min(ans,r-l+1);
        while(good())
        {
            remove();
            l++;
        }
    }
    if(ans==LONG_MAX)   ans=-1;
    cout<<ans<<nl;

    return 0;
}