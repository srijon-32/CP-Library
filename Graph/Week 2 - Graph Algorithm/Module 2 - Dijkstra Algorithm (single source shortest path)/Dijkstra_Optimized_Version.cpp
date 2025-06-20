#include<bits/stdc++.h>
using namespace std;

const int N=100;
vector<pair<int,int>> adj[N];
int dis[N];

class cmp
{
    public:
        bool operator()(pair<int,int>a,pair<int,int>b)
        {
            return a.second>b.second;
        }
};
// dijkstra works on monotonic type function
// like sum
// it will not work on xor
// because xor is not monotonic
// it doesn't gurantee that big number will always give big xor value
// or small number will always give smanll xor value
void dijkstra(int src)      //O((V+E)*logE)
{
    priority_queue<pair<int,int>,vector<pair<int,int>>,cmp>pq;
    dis[src]=0;
    pq.push({src,0});
    while(!pq.empty())
    {
        auto [parent,weight]=pq.top();
        pq.pop();
        for(auto [child,x]:adj[parent])
        {
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
    int n,e;    cin>>n>>e;
    for(int i=0;i<e;i++)
    {
        int u,v,w;  cin>>u>>v>>w;
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }
    fill(dis,dis+N,INT_MAX);
    dijkstra(0);
    for(int i=0;i<n;i++)    cout<<dis[i]<<" "; 
    cout<<endl;

    return 0;
}