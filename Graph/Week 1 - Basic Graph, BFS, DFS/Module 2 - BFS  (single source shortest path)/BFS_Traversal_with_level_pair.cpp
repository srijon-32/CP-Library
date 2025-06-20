#include<bits/stdc++.h>
using namespace std;
vector<int> v[1005];
bool vis[1005];
void bfs(int source,int destination)
{
    queue<pair<int,int>>q;
    q.push({source,0});
    vis[source]=true;
    bool paisi=false;
    while(!q.empty())
    {
        auto [parent,level]=q.front();
        q.pop();
        if(parent==destination)
        {
            cout<<level<<endl;
            paisi=true;
        }
        for(int child:v[parent])
        {
            if(!vis[child])
            {
                q.push({child,level+1});
                vis[child]=true;
            }
        }
    }
    if(!paisi)  cout<<-1<<endl;
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
    int source,destination; cin>>source>>destination;
    memset(vis,false,sizeof(vis));
    bfs(source,destination);


    return 0;
}