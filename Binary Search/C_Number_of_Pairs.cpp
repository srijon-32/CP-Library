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

ll n,L,R;
vector<ll>v;

ll bigger_than_R()
{
    ll ans=0;
    ll l=0,r=n-1;
    while(l<r)
    {
        if(v[l]+v[r]<=R) l++;
        else
        {
            ans+=r-l;
            r--;
        }
    }
    return  ans; 
}

ll smaller_than_L()
{
    ll ans=0;
    ll l=0,r=n-1;
    while(l<r)
    {
        if(v[l]+v[r]>=L) r--;
        else
        {
            ans+=r-l;
            l++;
        }
    }
    return ans;
}

int32_t main()
{
    FIO

    ll t;	cin>>t;
    ll tt=t;
    while (tt--)
    {
        cin>>n>>L>>R;
        v.resize(n);
        for (ll i=0;i<n;i++)    cin>>v[i];
        sort(all(v));
        ll bigger=bigger_than_R();
        ll smaller=smaller_than_L();
        cout<<(n*(n-1))/2-bigger-smaller<<nl;
    }

    return 0;
}