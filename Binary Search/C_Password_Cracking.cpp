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

    ll t;	cin >> t;
    ll tt=t;
    while (tt--)
    {
        ll n;   cin>>n;
        bool flag=false;
        string  ans="";
        while(true)
        {
            if(ans.size()==n)
            {
                cout<<"! "<<ans<<endl;
                cout<<flush;
                break;
            }
            bool zero=false,one=false;
            if(!flag)
            {
                cout<<"? "<<ans+'0'<<endl;
                cout<<flush;
                ll op1; cin>>op1;
                if(op1) ans+='0';
                else
                {
                    zero=true;
                    cout<<"? "<<ans+'1'<<endl;
                    cout<<flush;
                    ll op2; cin>>op2;
                    if(op2) ans+='1';
                    else    one=true;
                    if(one && zero) flag=true;
                }
                
            }
            else
            {
                cout<<"? "<<'1'+ans<<endl;
                cout<<flush;
                ll op1; cin>>op1;
                if(op1) ans='1'+ans;
                else
                {
                    cout<<"? "<<'0'+ans<<endl;
                    cout<<flush;
                    ll op2; cin>>op2;
                    if(op2) ans='0'+ans;
                }
            }
        }    
    }

    return 0;
}