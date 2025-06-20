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

ll sumOfDivisors(ll num)
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
        cout<<e<<" ";
        ll sum=0,pow=1;
        while(e>=0)
        {
            sum+=pow;
            pow*=i;
            e--;
        }
        cout<<sum<<nl;
        total*=sum;
    }
    if(num>1)   total*=(num+1);
    return total;
}

void solve()
{ 
    ll n;   cin>>n;
    cout<<sumOfDivisors(n)<<nl;
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