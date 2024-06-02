#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int>G[100];
bool visited[1000];
int main()
{
    int vertex,edge,i,u,v;
    cout<<"Enter the number of vertics and edge:";
    cin>>vertex>>edge;
    cout<<"Enter the edges:\n";
    for(i=0; i<edge; i++)
    {
        cin>>u>>v;
        G[u].push_back(v);
        G[v].push_back(u);
    }
    queue<int>q;
    q.push(0);
    visited[0]=true;
     cout<<"\nThe node is after traversing(BFS):";
    while(!q.empty())
    {
        int x = q.front();
        q.pop();
        cout<<x<<" ";
        for(auto it:G[x])
        {
            if(!visited[it])
            {
                q.push(it);
                visited[it]=true;
            }
        }
    }
    return 0;
}
