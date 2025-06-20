#include<bits/stdc++.h>
using namespace std;

const int N=1e5+5;
vector<int> adj[N];
bool vis[N]={false};
bool pathVis[N]={false};
bool cycle=false;

vector<int>cyclePath;

void dfs(int parent)
{
    if(!cycle)  cyclePath.push_back(parent);
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
    if(!cycle)  cyclePath.pop_back();
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
            cyclePath.clear();
            dfs(i);
        }           
    }

    if(cycle)
    {
        cout<<"cycle detected"<<endl;
        for(int x : cyclePath)  cout<<x<<" ";
        cout<<endl;
    }
    else cout<<"cycle not detected"<<endl;

    return 0;
}