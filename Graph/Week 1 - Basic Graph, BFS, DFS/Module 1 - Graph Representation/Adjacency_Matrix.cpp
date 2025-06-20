#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,e;    cin>>n>>e;
    // int mat[n][n];
    vector<vector<int>>mat(n,vector<int>(n,0));
    //initialization system 1
    // for(int i=0;i<n;i++)
    //     for(int j=0;j<n;j++) mat[i][j]=0;  
    //system 2
    // memset(mat,0,sizeof(mat));         
    for(int i=0;i<e;i++)    //for undirected graph
    {
        int a,b;    cin>>a>>b;
        mat[a][b]=1;
        mat[b][a]=1;
    }

    /*
    for(int i=0;i<e;i++)    //for directed graph
    {
        int a,b;    cin>>a>>b;
        mat[a][b]=1;    // directed graph e a b deoya mane direction sudhu a theke b er dike
        // jodi b thekeo a er dike connection thake tobe abar bole dibe b a
        // means evabe dibe:    1   5
        //                      5   1
    }
    */

    if(mat[3][4]==1)    cout<<"There is a connection between vertex 3 and 4"<<endl;
    else cout<<"There is no connection between vertex 3 and 4"<<endl;

    return 0;
}