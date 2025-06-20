#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,e;    cin>>n>>e;
    vector<vector<int>>adj(n,vector<int>(n,INT_MAX));
    for(int i=0;i<n;i++)    adj[i][i]=0;
    for(int i=0;i<e;i++)
    {
        int u,v,w;  cin>>u>>v>>w;
        adj[u][v]=w;    
    }
    for(int k=0;k<n;k++)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(k==i || k==j)    continue;
                if(adj[i][k]==INT_MAX || adj[k][j]==INT_MAX)    continue;
                if(adj[i][k]+adj[k][j] < adj[i][j]) //i to j via k (i->k->j < i->j)
                {
                    adj[i][j]=adj[i][k]+adj[k][j];
                }       
            }           
        }
    }

    //logic of negative cycle detection
    //where i==j the distance for it should be always zero(0)
    // if this value become less than 0 then its a negative cycle
    // like....
    bool cycle=false;
    for(int i=0;i<n;i++)
    {
        if(adj[i][i]<0)
        {
            cycle=true;
            break;
        }
    }
    
    // Floyd Warshall works for directed graph
    // in undirected graph floyd warshal fails to detect negative cycle
    // because if any weight is negative (like -1) its go u->v with -1 and v->u -1.
    // but in undirected graph you need atleast 3 node to for a cycle  
    //if there is no negative cycle then floyd warshall can work on undirected         

    if(cycle)   cout<<"Negative Cycle Detected"<<endl;
    else
    {
        for(int i=0;i<n;i++)    // works for positive or negative weight
        {
            for(int j=0;j<n;j++)
            {
                cout<<adj[i][j]<<" ";       
            }           
            cout<<endl;
        }
    }
    
    return 0;
}