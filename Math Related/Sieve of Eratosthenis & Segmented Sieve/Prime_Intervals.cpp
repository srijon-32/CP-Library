/* SRIJON
        SINGHA
            SAMANTA */
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
#define nl "\n"
#define all(v) v.begin(),v.end()
#define yes cout << "YES" << nl
#define no cout << "NO" << nl
const int mod = 1e9 + 7;

vector<char>rangePrime;

void segmentedSieve(ll L,ll R)
{
    ll N=sqrtl(R);
    vector<char>is_prime(N+1,true);
    is_prime[0]=is_prime[1]=false;
    for(ll i=2;i*i<=N;i++)
    {
        if(is_prime[i])
        {
            for(ll j=i*i;j<=N;j+=i) is_prime[j]=false;
        }
    }
    vector<ll>primes;
    for(ll i=2;i<=N;i++)    primes.push_back(i);
    
    rangePrime.assign(R-L+1,true);
    for(ll el:primes)
    {
        ll st=max(el*el,((L+el-1)/el)*el);
        for(ll j=st;j<=R;j+=el) rangePrime[j-L]=false;
    }
    if(L==1)    rangePrime[0]=false;
}

void solve()
{ 
    ll l,r; cin>>l>>r;
    segmentedSieve(l,r);
    for(ll i=0;i<rangePrime.size();i++)
    {
        if(rangePrime[i])   cout<<l+i<<nl;
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);  cout.tie(NULL);

    ll t=1;
    cin>>t;
    while(t--)  solve();           
    
    return 0;
}