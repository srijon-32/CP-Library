/* Sometimes we need to find all primes in range [L,R] of small size like 
R-L+1 ≈ 1e7 where R can be very large e.g 1e12 */

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
#define nl "\n"
#define all(v) v.begin(),v.end()
#define yes cout << "YES" << nl
#define no cout << "NO" << nl
const int mod = 1e9 + 7;

vector<char> segmentedSieve(ll L,ll R)
{
    ll N=sqrtl(R);
    vector<char>is_prime(N+1,'1');
    is_prime[0]=is_prime[1]='0';
    for(ll i=2;i*i<=N;i++)
    {
        if(is_prime[i]=='1')
        {
            for(ll j=i*i;j<=N;j+=i) is_prime[j]='0';
            //here we can keep j==N because vector size is N+1
        }
    }
    vector<ll>primes;
    for(ll i=2;i<=N;i++)
        if(is_prime[i]) primes.push_back(i);
    // precalculate primes upto sqrt(R).

    vector<char>rangePrime(R-L+1,'1');
    for(ll el:primes)
    {
        ll st=max(el*el,((L+el-1)/el)*el);
        for(ll j=st;j<=R;j+=el) rangePrime[j-L]='0';
    }
    if(L==1)    rangePrime[0]='0';
    
    return rangePrime;
    //segmented sieve part
}

void solve()
{ 
    ll L,R; cin>>L>>R;
    vector<char>primes=segmentedSieve(L,R);
    for(ll i=0;i<primes.size();i++)
    {
        if(primes[i]=='1') cout<<L+i<<" ";
    }
    cout<<nl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);  cout.tie(NULL);

    ll t=1;
    // cin>>t;
    while(t--)  solve();           
    
    return 0;
}