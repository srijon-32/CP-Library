#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
vector<int>par(N);
vector<int>group_size(N);
vector<int>group_level(N);
void dsu_initialize(int n)
{   
    for(int i=0;i<n;i++)
    {
        par[i]=-1;
        group_size[i]=1;
        group_level[i]=0;
    }           
}
int dsu_find(int node)   //O(log(n))
{
    if(par[node]==-1)  return node;
    int leader=dsu_find(par[node]);
    par[node]=leader;
    return leader;
    // return par[node]=dsu_find(par[node]);    //shortcut
}
void dsu_union_by_size(int node1,int node2) //union by size
{
    int leader1=dsu_find(node1);
    int leader2=dsu_find(node2);

    if(group_size[leader1]>group_size[leader2]) //optimized
    {
        par[leader2]=leader1;
        group_size[leader1]+=group_size[leader2];
    }
    else
    {
        par[leader1]=leader2;
        group_size[leader2]+=group_size[leader1];
    }

    // if(group_size[leader1]>group_size[leader2]) swap(leader1,leader2);   //shortcut
    // par[leader1]=leader2;
    // group_size[leader2]+=group_size[leader1];
}
void dsu_union_by_level(int node1,int node2) //union by size
{
    int leader1=dsu_find(node1);
    int leader2=dsu_find(node2);

    if(group_level[leader1]>group_level[leader2])
    {
        par[leader2]=leader1;
    }
    else if(group_level[leader2]>group_level[leader1])
    {
        par[leader1]=leader2;
    }
    else
    {
        par[leader1]=leader2;
        group_level[leader2]++;
    }
    
}
int main()
{
    dsu_initialize(8);

    // dsu_union_by_size(1,2);
    // dsu_union_by_size(2,3);
    // dsu_union_by_size(4,5);
    // dsu_union_by_size(5,6);

    // cout<<dsu_find(1)<<endl;
    // cout<<dsu_find(4)<<endl;

    // dsu_union_by_size(1,4);

    // cout<<dsu_find(1)<<endl;
    // cout<<dsu_find(4)<<endl;


    dsu_union_by_level(1,2);
    dsu_union_by_level(2,3);
    dsu_union_by_level(4,5);
    dsu_union_by_level(5,6);

    cout<<dsu_find(1)<<endl;
    cout<<dsu_find(4)<<endl;

    dsu_union_by_level(1,4);

    cout<<dsu_find(1)<<endl;
    cout<<dsu_find(4)<<endl;

    return 0;
}