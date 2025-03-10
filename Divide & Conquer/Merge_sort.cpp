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

vector<ll>v;

void merge(ll l,ll mid,ll r)
{
    ll n1=mid-l+1,n2=r-mid;
    vector<ll>a(n1),b(n2);
    for(ll i=0;i<n1;i++)    a[i]=v[l+i];
    for(ll i=0;i<n2;i++)    b[i]=v[mid+1+i];

    ll i=0,j=0,k=l;
    while(i<n1 && j<n2)
    {
        if(a[i]<b[j])
        {
            v[k]=a[i];
            k++,i++;
        }
        else
        {
            v[k]=b[j];
            k++,j++;
        }
    }
    while(i<n1)
    {
        v[k]=a[i];
        k++,i++;
    }
    while(j<n2)
    {
        v[k]=b[j];
        k++,j++;
    }
}

void mergesort(ll l,ll r)
{
    if(l<r)
    {
        ll mid=(l+r)/2;
        mergesort(l,mid);
        mergesort(mid+1,r);

        merge(l, mid, r);
    }
}

void solve()
{

    ll n;   cin>>n;
    v.resize(n);
    for (ll i=0;i<n;i++)  cin>>v[i];
    mergesort(0,n-1);
    for(ll i=0;i<n;i++)  cout<<v[i]<<" ";
    cout<<nl;

}

int32_t main()
{
    FIO

    ll t=1;
    // cin>>t;
    for(ll i=1;i<=t;i++)
    {
        // cout<<"Case "<<i<<": ";
        solve();           
    }

    return 0;
}