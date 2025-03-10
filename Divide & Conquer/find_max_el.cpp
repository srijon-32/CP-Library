#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll find_max_el(vector<ll>v,ll i,ll j)
{
    if(j-i+1<=0)    return 0;
    if(i==j) return v[i];
    ll mid=(i+j)/2;
    ll x=find_max_el(v,i,mid);
    ll y=find_max_el(v,mid+1,j);
    return max(x,y);
}
int main()
{
    ll n;   cin>>n;
    vector<ll>v(n);
    for(ll i=0;i<n;i++) cin>>v[i];
    ll mx=find_max_el(v,0,n-1);
    cout<<mx<<endl;
    return 0;
}