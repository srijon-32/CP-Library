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

struct tup{
    ll a,b,c;
};

ll N,M;
vector<tup>v;

ll num(tup x,ll time)
{
    ll sum=0;
    ll p=x.a*x.b+x.c;
    ll q=time/p;
    sum+=(q*x.b);
    ll rem=time%p;
    sum+=min(x.b,(rem/x.a));
    return sum; 
}
bool good(ll time)
{
    ll total=0;
    for(ll i=0;i<M;i++)
         total+=num(v[i],time);          
    return total>=N;
}

int32_t main()
{
    FIO

    cin>>N>>M;
    v.resize(M);
    for(ll i=0;i<M;i++)
        cin>>v[i].a>>v[i].b>>v[i].c;

    ll l=0;
    ll r=LONG_MAX;
    for(ll i=0;i<M;i++)
    {
        ll p=v[i].a*v[i].b+v[i].c;
        ll highest_time=(p*N);
        r=min(r,highest_time);           
    }
    
    while(l+1<r)
    {
        ll mid=(l+r)/2;
        if(good(mid)) r=mid;
        else l=mid;
    }
    cout<<r<<nl;
    for(ll i=0;i<M;i++)
    {
        ll sum=num(v[i],r);
        cout<<min(sum,N)<<" ";
        N-=min(sum,N);          
    }
    cout<<nl;

    return 0;
}