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

// Bit manipulations
#define IS_COMPOSITE(id, composite) (composite[(id) >> 5] & (1 <<((id) & 31)))
#define SET_COMPOSITE(id, composite) (composite[(id) >> 5] |= (1 <<((id) & 31)))

const int N = 100000000;

// Only odd numbers
const int LIMIT = (N >> 1);
const int ARRAY_SIZE = (LIMIT >> 5) + 1;

unsigned int composite[ARRAY_SIZE];
vector<int> primes;

void bitwise_sieve()
{
    for (int i = 3; i * i <= N; i += 2) {
        if (!IS_COMPOSITE(i >> 1, composite)) {
            for (int j = i * i; j <= N; j += (i << 1)) {
                SET_COMPOSITE(j >> 1, composite);
            }
        }
    }

    primes.push_back(2);
    for (int i = 3; i <= N; i += 2) {
        if (!IS_COMPOSITE(i >> 1, composite)) primes.push_back(i);
    }
}

ll SumOfDivisors(ll n)
{
    ll total=1;
    for(ll el:primes)
    {
        if(el*el>n) break;
        ll sum=0,pow=1;
        while(n%el==0)
        {
            sum+=pow;
            pow*=el;
            n/=el;
        }
        sum+=pow;
        total*=sum;
    }
    if(n>1) total*=(n+1);
    return total;
}

void solve()
{ 
    ll n;   cin>>n;
    cout<<SumOfDivisors(n)-n<<nl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);  cout.tie(NULL);

    bitwise_sieve();

    ll t=1;
    cin>>t;
    while(t--)  solve();           
    
    return 0;
}