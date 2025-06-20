#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,e;    cin>>n>>e;
    // pair<int,int> mat[e];
    vector<pair<int,int>>mat(e);        //etar size e karon ekhane edge gulai direct rakhtesi
    for(int i=0;i<e;i++)
    {
        int a,b;    cin>>a>>b;
        mat[i]={a,b};
    }
    for(int i=0;i<e;i++)
    {
        cout<<mat[i].first<<" "<<mat[i].second<<endl;           
    }
    return 0;
}