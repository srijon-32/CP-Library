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

vector<ll>F(1e6+5);
void factorial()
{
    for(ll i=0;i<1e6+5;i++)
    {
        if(i==0)    F[i]=1;
        else F[i]=((F[i-1]%mod)*(i%mod))%mod;
    }
}

bool is_good(ll num,ll a,ll b)
{
    while(num>0)
    {
        if((num%10)!=a && (num%10)!=b)
        {
            return false;
        }
        num/=10;
    }
    return true;
}

ll biexp(ll a,ll b)
{
    ll res=1;
    while(b>0)
    {
        if(b&1) res=(res*a)%mod;
        a=(a*a)%mod;
        b/=2;
    }
    return res;
}

ll nCk(ll a,ll b)
{
    ll k=((F[b]%mod)*(F[a-b]%mod))%mod;
    ll res=((F[a]%mod)*biexp(k,mod-2))%mod;
    return res;
}

void solve()
{

    ll a,b,n;   cin>>a>>b>>n;
    //I can only choose i=0...n a's and (n-i)   b's
    //only these are the good numbers 2^n
    //if the sum of the number only contain a and b then only ques is
    //how many ways I can put a in n position or nCi

    ll ans=0;
    for(ll i=0;i<=n;i++)
    {
        ll num=(a*i)+(b*(n-i));
        if(is_good(num,a,b))
        {
            ans=((ans%mod)+(nCk(n,i)%mod))%mod;
        }
    }
    cout<<ans<<nl; 

}

int32_t main()
{
    FIO

    factorial();

    ll t=1;
    // cin>>t;
    for(ll i=1;i<=t;i++)
    {
        // cout<<"Case "<<i<<": ";
        solve();           
    }

    return 0;
}