#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,e;    cin>>n>>e;
    // vector<int> mat[n];
    vector<vector<int>>mat(n,vector<int>());
    for(int i=0;i<e;i++)
    {
        int a,b;    cin>>a>>b;
        mat[a].push_back(b);
        mat[b].push_back(a);
        // directed graph hole b er moddhe a ke push korbo na
    }
    //which vectexes are connected with vertex 1
    for(int i=0;i<mat[1].size();i++)    cout<<mat[1][i]<<" ";
    cout<<endl;

    return 0;
}