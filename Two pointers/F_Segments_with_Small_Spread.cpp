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

struct stack
{
    vector<ll>s,smin={LLONG_MAX},smax={LLONG_MIN};
    void push(ll x)
    {
        s.pb(x);
        smin.pb(::min(smin.back(),x));
        smax.pb(::max(smax.back(),x));
    }
    ll pop()
    {
        ll res=s.back();
        s.ppb();
        smin.ppb();
        smax.ppb();
        return res;
    }
    bool empty()
    {
        return s.empty();
    }
    ll min()
    {
        return smin.back();
    }
    ll max()
    {
        return smax.back();
    }
};

::stack s1,s2;

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
ll k;
bool good()
{
    ll mn=min(s1.min(),s2.min());
    ll mx=max(s1.max(),s2.max());
    return mx-mn<=k;
}

int32_t main()
{
    FIO

    ll n; cin>>n>>k;
    vector<ll> v(n);
    for (ll i=0;i<n;i++)    cin>>v[i];
    ll ans=0,l=0;
    for(ll r=0;r<n;r++)
    {
        add(v[r]);
        while(!good())
        {
            remove();
            l++;
        }
        ans+=r-l+1;          
    }
    cout<<ans<<nl;

    return 0;
}