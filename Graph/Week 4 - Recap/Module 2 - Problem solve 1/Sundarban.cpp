/* SRIJON
        SINGHA
            SAMANTA */
#include <bits/stdc++.h>
using namespace std;

long long int n;
char mat[32][32];
bool vis[32][32];
long long int dis[32][32];
vector<pair<long long int,long long int> >direction;
bool valid(long long int i,long long int j)
{
    return (i>=0 && j>=0 && i<n && j<n);
}

void bfs(long long int srci,long long int srcj)
{
    queue<pair<long long int,long long int> >q;
    q.push({srci,srcj});
    vis[srci][srcj]=true;
    dis[srci][srcj]=0;
    while(!q.empty())
    {
        long long int pari=q.front().first;
        long long int parj=q.front().second;
        q.pop();
        for(long long int i=0; i<4; i++)
        {
            pair<long long int,long long int>d=direction[i];
            long long int childi=pari+d.first,childj=parj+d.second;
            if(valid(childi,childj) && !vis[childi][childj] && mat[childi][childj]!='T')
            {
                q.push({childi,childj});
                vis[childi][childj]=true;
                dis[childi][childj]=dis[pari][parj]+1;
            }
        }
    }
}

void solve()
{

    while(cin >> n)
    {
        direction.push_back({-1,0});
        direction.push_back({1,0});
        direction.push_back({0,-1});
        direction.push_back({0,1});
        memset(vis,false,sizeof(vis));
        memset(dis,-1,sizeof(dis));
        for(long long int i=0;i<n;i++)
        {
            for(long long int j=0;j<n;j++)
            {
                cin >> mat[i][j];  
            }           
        }
        long long int Ei,Ej;
        for(long long int i=0;i<n;i++)
        {
            for(long long int j=0;j<n;j++)
            {
                if(!vis[i][j] && mat[i][j]=='S')
                {
                    bfs(i,j);
                }
                if(mat[i][j]=='E')
                {
                    Ei=i,Ej=j;
                }           
            }   
        }
        cout<<dis[Ei][Ej]<<endl;
    }    

}

int32_t main()
{

    long long int t=1;
    // cin>>t;
    for(long long int i=1;i<=t;i++)
    {
        // cout<<"Case "<<i<<": ";
        solve();           
    }

    return 0;
}