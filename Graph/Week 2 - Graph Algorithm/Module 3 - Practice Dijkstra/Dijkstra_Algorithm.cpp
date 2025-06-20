#include<bits/stdc++.h>
using namespace std;

int n,st,en; 
const int N=105;
int adjMat[N][N];
int dis[N];

class cmp
{
public:
    bool operator()(pair<int,int>a,pair<int,int>b)
    {
        return a.second>b.second;
    }
};

void dijkstra(int src)
{
    priority_queue<pair<int,int>,vector<pair<int,int>>,cmp>pq;
    pq.push({src,0});
    dis[src]=adjMat[src][src];
    while(!pq.empty())
    {
        auto [parent,weight]=pq.top();
        pq.pop();
        for(int i=1;i<=n;i++)
        {
            if(adjMat[parent][i]==-1)   continue;
            int child=i,x=adjMat[parent][i];
            if(weight+x < dis[child])
            {
                dis[child]=weight+x;
                pq.push({child,weight+x});
            }
        }
    }
}

int main()
{
    cin>>n>>st>>en;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin>>adjMat[i][j];
        }
    }
    fill(dis,dis+N,INT_MAX);
    dijkstra(st);
    if(dis[en]==INT_MAX)    cout<<-1<<endl;
    else    cout<<dis[en]<<endl;

    return 0;
}