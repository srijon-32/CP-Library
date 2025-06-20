#include<bits/stdc++.h>
using namespace std;
vector<int> v[1005];
bool vis[1005];
int par[1005];
void bfs(int source)
{
    queue<int>q;
    q.push(source);
    vis[source]=true;
    while(!q.empty())
    {
        int parent=q.front();
        q.pop();
        for(int child:v[parent])
        {
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
    int n,e; cin>>n>>e;
    for(int i=0;i<e;i++)
    {
        int a,b;    cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);      
    }
    int source,destination; cin>>source>>destination;
    memset(vis,false,sizeof(vis));
    memset(par,-1,sizeof(par));
    bfs(source);

    vector<int>path;
    int x=destination;
    while(x!=-1)
    {
        path.push_back(x);
        x=par[x];
    }
    reverse(path.begin(),path.end());
    for(int p:path) cout<<p<<" ";
    cout<<endl;

    return 0;
}