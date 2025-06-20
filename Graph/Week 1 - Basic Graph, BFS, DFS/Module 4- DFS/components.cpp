#include<bits/stdc++.h>
using namespace std;
const int N=100;

vector<int> v[N];
bool vis[N]={false};

void dfs(int source)
{
    cout<<source<<endl;
    vis[source]=true;
    for(int child : v[source])
    {
        if(!vis[child])
        {
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
        v[a].push_back(b);
        v[b].push_back(a);
    }

    int components=0;
    for(int i=0;i<n;i++)
    {
        if(!vis[i])
        {
            dfs(i);
            components++;
        }

    }

    cout<<"components- "<<components<<endl;

    return 0;
}