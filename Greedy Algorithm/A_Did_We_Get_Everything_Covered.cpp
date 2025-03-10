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

void solve()
{

    ll n,k,m;   cin>>n>>k>>m;
    string s;   cin>>s;
    string ans;
    set<char>st;
    ll i;
    for(i=0;i<m && ans.size()<n;i++)
    {
        if(s[i]>='a' && s[i]<='a'+(k-1))    st.insert(s[i]);
        if(st.size()==k)
        {
            ans.pb(s[i]);
            st.clear();
        }
    }
    // cout<<ans<<nl;
    if(ans.size()==n)   yes;
    else
    {
        no;
        ll j=0;
        char ch='!';
        for(char c:st)
        {
            char check='a'+j;
            if(c!=check) 
            {
                ch=check;
                break;
            }
            j++;
        }
        if(ch=='!') ch='a'+j;
        for(ll i=ans.size();i<n;i++)    ans.pb(ch);
        cout<<ans<<nl;
    }

}

int32_t main()
{
    FIO

    ll t=1;
    cin>>t;
    for(ll i=1;i<=t;i++)
    {
        // cout<<"Case "<<i<<": ";
        solve();           
    }

    return 0;
}