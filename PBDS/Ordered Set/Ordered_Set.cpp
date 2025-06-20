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
//1. #include<ext/pb_ds/assoc_container.hpp>
//2. #include<ext/pb_ds/tree_policy.hpp>
#include<bits/extc++.h> // i can use this only this one instead of last two fi
using namespace __gnu_pbds;
typedef tree <int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> oset;
// oset_name.order_of_key(x);   number of element less than x
// *oset_name.find_by_order(k);  kth element 0 based  (end(oset_name)!=oset_name.find_by_order(4))<<nl; //true->ache //false->nai
const int mod = 1e9 + 7;

void solve()
{ 
    oset st;
    st.insert(1);
    st.insert(2);
    st.insert(4);
    st.insert(8);
    cout<<*st.find_by_order(2)<<nl; //4
    cout<<*st.find_by_order(3)<<nl; //8
    cout<<boolalpha<<(end(st)!=st.find_by_order(4))<<nl; //true->ache //false->nai
    cout<<st.order_of_key(-2)<<nl; //0
    cout<<st.order_of_key(5)<<nl; //3
    cout<<st.order_of_key(19)<<nl;// 4
    
}

int32_t main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);                    
    cout.tie(NULL);

    ll t=1;
    cin>>t;
    for(ll i=1;i<=t;i++)
    {
        // cout<<"Case "<<i<<": ";
        solve();           
    }

    return 0;
}