#include<bits/stdc++.h>
using namespace std;
const int N=100;

int n,m;
char a[N][N];
int level[N][N];
bool vis[N][N];
// vector<pair<int,int>>d={{0,-1},{0,1},{-1,0},{1,0}}; //bam,dan,upor,nich
vector<pair<int,int>>d={{-1,-1},{1,1},{-1,1},{1,-1}};   //kunakuni

bool valid(int i,int j)
{
    if(i<0 || i>=n || j<0 || j>=m)  return false;
    return true;
}

void bfs(int si,int sj)
{
    queue<pair<int,int>>q;
    q.push({si,sj});
    vis[si][sj]=true;
    level [si][sj]=0;
    while(!q.empty())
    {
        auto [pari,parj]=q.front();
        q.pop();
        // cout<<pari<<" "<<parj<<endl;
        for(int i=0;i<4;i++)
        {
            int ci=pari+d[i].first;
            int cj=parj+d[i].second;
            if(valid(ci,cj) && !vis[ci][cj])
            {
                q.push({ci,cj});
                vis[ci][cj]=true;
                level[ci][cj]=level[pari][parj]+1;
            }           
        }
    }

}

int main()
{
    cin>>n>>m;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)    cin>>a[i][j];
    int si,sj;  cin>>si>>sj;
    int desi,desj;  cin>>desi>>desj;

    memset(vis,false,sizeof(vis)); 
    memset(level,-1,sizeof(level)); 

    bfs(si,sj); 

    cout<<level[desi][desj]<<endl;
            
    return 0;
}