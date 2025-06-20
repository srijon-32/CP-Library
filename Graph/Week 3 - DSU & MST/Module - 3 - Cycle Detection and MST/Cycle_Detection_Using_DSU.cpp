#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
vector<int>parent(N);
vector<int>group_size(N);
void initialize(int n)
{
    for(int i=1;i<=n;i++)
    {
        parent[i]=-1; 
        group_size[i]=1;   
    }
}
int dsu_find(int node)
{
    if(parent[node]==-1)    return node;
    int leader=dsu_find(parent[node]);
    parent[node]=leader;
    return leader;
}
void union_by_size(int node1,int node2)
{
    int leader1=dsu_find(node1); 
    int leader2=dsu_find(node2); 
    if(group_size[leader1]>group_size[leader2]) swap(leader1,leader2);
    parent[leader1]=leader2;
    group_size[leader2]+=group_size[leader1];
}
int main()
{
    int n,e;    cin>>n>>e;
    initialize(n);
    bool cycle=false;
    for(int i=0;i<e;i++)
    {
        int u,v;    cin>>u>>v;
        int leader1=dsu_find(u);
        int leader2=dsu_find(v);
        if(leader1==leader2)
        {
            cycle=true;
        }
        else
        {
            union_by_size(u,v);
        }
    }
    if(cycle)   cout<<"Cycle Detected"<<endl;
    else cout<<"No Cycle"<<endl;

    return 0;
}