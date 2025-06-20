#include<bits/stdc++.h>
using namespace std;

struct edge {
    int u,v,w;
};

int main()
{
    int n,e;    cin>>n>>e;
    vector<edge>edgeList;
    for(int i=0;i<e;i++)
    {
        int u,v,w;  cin>>u>>v>>w;
        edgeList.push_back({u,v,w});
        edgeList.push_back({v,u,w});    //only difference between
                        //directed and undirected is here
    }
    vector<int>dis(n,INT_MAX);  //Time Complexity O(n*e)
    int src=0;
    dis[src]=0;
    for(int i=1;i<n;i++)
    {
        for(auto [u,v,w]:edgeList)
        {
            if(dis[u]!=INT_MAX && dis[u]+w < dis[v])
            {
                dis[v]=dis[u]+w;
            }
        }
    }
    bool cycle=false;
    for(auto [u,v,w]:edgeList)
    {
        if(dis[u]!=INT_MAX && dis[u]+w < dis[v])
        {
            cycle = true;
            break;
            dis[v]=dis[u]+w;
        }
    }
    if(cycle)   cout<<"Negative Cycle, No Answer"<<endl;
    else
    {
        for(int i=0;i<n;i++) cout<<dis[i]<<" ";           
        cout<<endl;
    }
    
    return 0;
}