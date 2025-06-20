#include<bits/stdc++.h>
using namespace std;

int n,m;   
char a[20][20]; 
bool vis[20][20];
vector<pair<int,int>>d={{0,-1},{0,1},{-1,0},{1,0}};     //bam,dan,upor,nich
// vector<pair<int,int>>d={{-1,-1},{1,1},{-1,1},{1,-1}};   //kunakuni

bool valid(int i,int j)
{
    if(i<0 || j<0 || i>=n || j>=m)  return false;
    return true;
}

void dfs(int si,int sj)
{
    cout<<si<<" "<<sj<<endl;
    vis[si][sj]=true;
    for(int i=0;i<4;i++)
    {
        int ci=si+d[i].first;
        int cj=sj+d[i].second;
        if(valid(ci,cj) && !vis[ci][cj])
        {
            dfs(ci,cj);
        }
    }
    
}
int main()
{
    cin>>n>>m;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)    cin>>a[i][j];

    int si,sj;  cin>>si>>sj;
    memset(vis,false,sizeof(vis));
    dfs(si,sj);

    return 0;
}