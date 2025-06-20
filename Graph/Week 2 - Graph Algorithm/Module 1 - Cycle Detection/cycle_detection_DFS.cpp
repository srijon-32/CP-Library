#include<bits/stdc++.h>
using namespace std;

const int N=100;
vector<int> adj[N];
bool vis[N]={false};
int parentArray[N]={-1};
bool cycle=false;

void dfs(int parent)
{
    vis[parent]=true;
    for(int child:adj[parent])
    {
        if(vis[child] && child!=parentArray[parent])  cycle=true;  
        if(!vis[child])
        {
            parentArray[child]=parent;
            dfs(child);
        }
    }
}

int main()
{
    int n,e;    cin>>n>>e;
    for(int i=0;i<e;i++)
    {
        int a,b;    cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);       
    }
    for(int i=0;i<n;i++)
    {
        if(!vis[i]) dfs(i);       
    }
    if(cycle)   cout<<"Cycle Detected"<<endl;
    else cout<<"Cycle not Detected"<<endl;

    return 0;
}