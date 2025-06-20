#include<bits/stdc++.h>
using namespace std;
vector<int> v[1005];
bool vis[1005];
int level[1005];
void bfs(int source)
{
    queue<int>q;
    q.push(source);
    vis[source]=true;
    level[source]=0;
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
                level[child]=level[parent]+1;
            }
        }
    }
}
int main()
{
    int n,e;    cin>>n>>e;
    for(int i=0;i<e;i++)
    {
        int a,b;    cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);       
    }
    int source; cin>>source;
    memset(vis,false,sizeof(vis));
    memset(level,-1,sizeof(level));
    bfs(source);
    for(int i=0;i<n;i++)
    {
        cout<<i<<" "<<level[i]<<endl;           
    }

    return 0;
}