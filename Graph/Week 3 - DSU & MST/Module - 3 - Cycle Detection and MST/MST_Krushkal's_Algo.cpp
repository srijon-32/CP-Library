/* MST mane eita na je ekta vertex theke arekta vertex e jaoyar
minimum cost er rasta ber kora. Er mane holo prottekta vertex theke
jeno prottekta vertex e jaoya jay sobcheye total kom khoroce. */

#include<bits/stdc++.h>
using namespace std;
struct edge {
    int u,v,w;
};

bool cmp(edge a,edge b)
{
    return a.w < b.w;
}

const int N=1e5+5;
vector<int>parent(N);
vector<int>level(N);

void initialize(int n)
{
    for(int i=0;i<n;i++)
    {
        parent[i]=-1;
        level[i]=0;       
    }
}
int dsu_find(int node)
{
    if(parent[node]==-1)    return node;
    return parent[node]=dsu_find(parent[node]);
}

void union_by_level(int node1,int node2)
{
    int leader1=dsu_find(node1);
    int leader2=dsu_find(node2);
    if(level[leader1]>level[leader2])
    {
        parent[leader2]=leader1;
    }
    else if(level[leader1]<level[leader2])
    {
        parent[leader1]=leader2;
    }
    else
    {
        parent[leader1]=leader2;
        level[leader2]++;
    }
}

int main()
{
    int n,e;    cin>>n>>e;
    initialize(n);
    vector<edge>edgeList(e);
    for(int i=0;i<e;i++)
    {
        int u,v,w;  cin>>u>>v>>w;
        edgeList[i]={u,v,w};
    }
    sort(edgeList.begin(),edgeList.end(),cmp);
    int cost=0;
    for(auto [u,v,w]:edgeList)
    {
        int leader1=dsu_find(u);
        int leader2=dsu_find(v);
        if(leader1==leader2)
        {
            //same group or connected
            continue;
        }
        else
        {
            // not connected, so connect them
            union_by_level(leader1,leader2);
            cost+=w;
        }
    }
    cout<<cost<<endl;

    return 0;
}