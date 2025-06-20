#include<bits/stdc++.h>
using namespace std;
const int N=100;
vector<pair<int,int>> adj[N];
int disArray[N];

void dijkstra(int src)      //Time Complexity -> O(N*E)
{
    queue<pair<int,int>>q;
    disArray[src]=0;
    q.push({src,0});
    while(!q.empty())
    {
        auto [parent,weight]=q.front();
        q.pop();
        for(auto [child,x]:adj[parent])
        {
            if(weight+x < disArray[child])
            {
                disArray[child]=weight+x;
                q.push({child,weight+x});
            }
        }
    }
}

int main()
{
    int n,e;    cin>>n>>e;
    for(int i=0;i<e;i++)
    {
        int u,v,w;  cin>>u>>v>>w;
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }
    //memset(disArray,INT_MAX,sizeof(disArray));
    // memset works for 0 or -1 type value
    // so here I should use fill function or direct loop
    fill(disArray, disArray + N, INT_MAX);
    dijkstra(0);
    for(int i=0;i<n;i++)    cout<<disArray[i]<<" ";
    cout<<endl;

    return 0;
}