#include<bits/stdc++.h>
using namespace std;

const int N=1005;
vector<int> v[N];
bool vis[N]={false};

void dfs(int source)
{
    cout<<source<<endl;     //do all your work here for this vertex
    vis[source]=true;
    for(int x:v[source])
    {
        if(!vis[x])
        {
            dfs(x);
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
    dfs(source);

    return 0;
}