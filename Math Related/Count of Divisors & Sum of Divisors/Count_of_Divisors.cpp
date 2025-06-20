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

ll countDiv(ll num)
{
    ll total=0;
    for(ll i=2;i*i<=num;i++)
    {
        if(num%i==0)
        {
            if(i!=num/i)    total+=2;
            else total++;
        }
    }
    return total;
}

ll numberOfDivisors(ll num)
{
    ll total=1;
    for(ll i=2;i*i<=num;i++)
    {
        ll e=0;
        while(num%i==0)
        {
            e++;
            num/=i;
        }
        total*=(e+1);
    }
    if(num>1)   total*=2;
    return total;
}

void solve()
{ 
    ll n;   cin>>n;
    cout<<numberOfDivisors(n)<<nl; 
    cout<<countDiv(n)+2<<nl;
    /* approch 1 is way more faster than approach 2.
    benchmark:
    approach 1 - aprx. 20 ms
    approach 2 - aprx. 800 ms */
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