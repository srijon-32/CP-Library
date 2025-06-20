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

    ll t;	cin>>t;
    ll tt=t;
    while (tt--)
    {
        string s="***",t;   cin>>t;
        s+=t;
        vector<bool>v(s.size());
        v[0]=false,v[1]=false,v[2]=false;
        ll total=0;
        for(ll i=3;i<s.size();i++)
        {
            string check="";
            for(ll j=i-3;j<=i;j++)  check+=s[j];
            if(check=="1100")
            {
                v[i]=true;
                total++;
            }
            else    v[i]=false;          
        }

        ll q;   cin>>q;
        while(q--)
        {
            ll a; cin>>a;
            char b; cin>>b;
            a--;
            a+=3;
            if(s[a]==b)
            {
                if(total!=0)    yes;
                else no;
            }
            else
            {
                s[a]=b;
                ll x=s.size();
                for(ll i=a;i<=min(x,a+3);i++)
                {
                    string check="";
                    for(ll j=i-3;j<=i;j++)  check+=s[j];
                    if(v[i]==true && check!="1100")
                    {
                        total--;
                        v[i]=false;
                    }
                    else if(v[i]==false && check=="1100")
                    {
                        total++;
                        v[i]=true;
                    }       
                }
                if(total!=0)    yes;
                else no;
            }
        }
    }

    return 0;
}