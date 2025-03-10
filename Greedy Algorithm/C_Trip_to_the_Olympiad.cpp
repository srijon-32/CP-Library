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

string tostring(ll a)
{
    string s;
    while(a!=0)
    {
        s.pb((a%2)+'0');
        a/=2;
    }
    reverse(all(s));
    if(s.empty())   return "0";
    else    return s;
}
ll toll(string s)
{
    ll base=1,ans=0;
    for(ll i=s.size()-1;i>=0;i--)
    {
        ans+=((s[i]-'0')*base);
        base*=2;          
    }
    return ans;
}

void solve()
{

    ll l,r; cin>>l>>r;
    string s1=tostring(l),s2=tostring(r);
    if(s2.size()>s1.size())
    {
        string ans1="1",ans2="";
        for(ll i=0;i<s2.size()-1;i++)   ans1+='0',ans2+='1';
        cout<<toll(ans1)<<" "<<toll(ans2)<<" ";
        if(toll(ans2)==l)   cout<<toll(ans1)+1<<nl;
        else cout<<l<<nl;
    }
    else
    {
        
        ll start;
        for(ll i=s2.size()-1;i>0;i--)
        {
            if(s2[i]=='0')
            {
                start=i;
                break;
            }          
        }
        

        string ans1="1",ans2="";
        for(ll i=0;i<s1.size()-1-start;i++)   ans1+='0',ans2+='1';
        string aaa="1",bbb="1";
        for(ll i=1;i<s1.size()-ans1.size();i++) aaa+=s1[i];
        for(ll i=1;i<s2.size()-ans2.size();i++) bbb+=s2[i];
        aaa+=ans1,bbb+=ans2;
        cout<<s1<<" "<<s2<<" "<<aaa<<" "<<bbb<<nl;
        cout<<toll(aaa)<<" "<<toll(bbb)<<" ";
        if(bbb==s1) cout<<toll(aaa)+1<<nl;
        else cout<<toll(s1)<<nl;
        
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