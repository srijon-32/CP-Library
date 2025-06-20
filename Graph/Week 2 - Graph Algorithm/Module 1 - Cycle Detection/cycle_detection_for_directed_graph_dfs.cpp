#include<bits/stdc++.h>
using namespace std;

const int N=1e5+5;
vector<int> adj[N];
bool vis[N]={false};
bool pathVis[N]={false};
bool cycle=false;

void dfs(int parent)
{
    vis[parent]=true;
    pathVis[parent]=true;
    for(int child : adj[parent])
    {
        if(pathVis[child])
        {
            cycle=true;
        }

        if(!vis[child])
        {
            dfs(child);
        }
    }
    pathVis[parent]=false;
}

int main()
{
    int n,e;    cin>>n>>e;
    for(int i=0;i<e;i++)
    {
        int a,b;    cin>>a>>b;
        adj[a].push_back(b);           
    }

    for(int i=0;i<n;i++)
    {
        if(!vis[i])
        {
            dfs(i);
        }           
    }

    if(cycle)   cout<<"cycle detected"<<endl;
    else cout<<"cycle not detected"<<endl;

    return 0;
}