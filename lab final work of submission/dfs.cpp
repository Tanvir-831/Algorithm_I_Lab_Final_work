#include<bits/stdc++.h>
using namespace std;
vector<int>G[1000];
bool visited[100];
void dfs(int src)
{
    cout<<src<<" ";
    visited[src]=true;
    for(auto it:G[src])
    {
        if(!visited[it])
        {
            visited[it]=true;
            dfs(it);
        }
    }
}
int main()
{
    int edge,vertex,i,v,u;
    cout<<"Enter the number of vertics and edge:";
    cin>>edge>>vertex;
    cout<<"Enter the edges:\n";
    for(i=0; i<edge; i++)
    {
        cin>>u>>v;
        G[u].push_back(v);
        G[v].push_back(u);
    }
    cout<<"\nThe node is after traversing(DFS):";
    dfs(1);
    return 0;
}
