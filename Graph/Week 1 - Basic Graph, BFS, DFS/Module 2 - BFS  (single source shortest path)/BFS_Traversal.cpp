/*BFS - Unweighted graph e shortest path ber kore*/
/*Time Complexity: O(n+e)*/
/*One Source Shortest Path Algorithm*/

#include<bits/stdc++.h>
using namespace std;
vector<int> v[1005];
bool vis[1005];
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
    bfs(source);
    

    return 0;
}