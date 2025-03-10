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
#define pf push_front
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
const int mod = 1e9 + 7;

int32_t main()
{
    FIO

    ll t;	cin >> t;
    ll tt=t;
    while (tt--)
    {
        ll n,q; cin>>n>>q;
        string a,b; cin>>a>>b;
        vector<ll>cnt(26,0);
        vector<ll>v(n);
        for(ll i=0;i<n;i++)
        {
             ll idx1=a[i]-'a',idx2=b[i]-'a';
             cnt[idx1]++,cnt[idx2]--;
             ll sum=0;
             for(ll j=0;j<26;j++)
             {
                 if(cnt[j]>0)
                 sum+=cnt[j];          
             }
             v[i]=sum;         
        }
        for(ll i=0;i<q;i++)
        {
            ll l,r; cin>>l>>r;
            l--,r--;
            ll ans;
            if(!l)  ans=v[r];
            else ans=v[r]-v[l-1];
            cout<<abs(ans)<<nl;        
        }   
    }

    return 0;
}
