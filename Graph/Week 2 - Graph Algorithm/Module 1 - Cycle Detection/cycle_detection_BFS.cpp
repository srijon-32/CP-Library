#include<bits/stdc++.h>
using namespace std;

const int N=100;
vector<int> adj[N];
bool vis[N]={false};
int par[N]={-1};
bool cycle = false;

void bfs(int src)
{
    queue<int>q;
    q.push(src);
    vis[src]=true;

    par[src]=-1;

    while(!q.empty())
    {
        int parent=q.front();
        q.pop();
        for(int child:adj[parent])
        {
            if(vis[child] && child!=par[parent])
            {
                cycle = true;
            }

            if(!vis[child])
            {
                q.push(child);
                vis[child]=true;

                par[child]=parent;
            }
        }
    }
    
}

int main()
{
    int n,e;    cin>>n>>e;
    for(int i=0;i<e;i++)
    {
        int a,b; cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    for(int i=0;i<n;i++)
    {
        if(!vis[i])
        {
            bfs(i);
        }         
    }
    if(cycle)   cout<<"cycle detected"<<endl;
    else    cout<<"cycle not detected"<<endl;

    return 0;
}