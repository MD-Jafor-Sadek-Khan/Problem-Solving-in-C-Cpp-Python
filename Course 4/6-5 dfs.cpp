#include <bits/stdc++.h>
using namespace std;

const int n = 1000;

int visited[n];

vector<int> adj_list[n];

void dfs(int node)
{
    cout << node;
    visited[node] = 1;

    for (int adj_node : adj_list[node])
    {
        if (visited[adj_node]==0)
        {
            dfs(adj_node);
        }
        
    }
}

int main()
{
    int node,edges;

    cin>>node>>edges;
    

    for (int i = 0; i < edges; i++)
    {
        int u,v;
        cin>>u>>v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);

    }
    
    dfs(0);

}
