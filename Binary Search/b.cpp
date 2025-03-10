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

int32_t main()
{
    FIO

    ll t;	cin >> t;
    ll tt=t;
    while (tt--)
    {
        string s;  cin>>s;
        ll start,end=1;
        for(ll i=0;i<s.size();i++)  start=end,end*=10;
        end--;
        string ans;
        ll mx=LONG_MIN;
        for(ll i=start;i<=end;i++)
        {
            string x;
            ll num=i;
            while(num!=0)
            {
                char c=num%10+'0';
                x.pb(c);
                num/=10;
            }
            reverse(all(x));
            bool flag=true;
            for(ll j=0;j<s.size();j++)
                if(s[j]!='?' && s[j]!=x[j])
                    flag=false;          

            if(flag)
            {
                ll cnt=__builtin_popcountll(i);
                if(cnt>=mx)
                {
                    mx=cnt;
                    ans=x;
                }
            }      
        }
        cout<<ans<<nl;                
    }
    return 0;
}