#include<bits/stdc++.h>

using namespace std;

int main()
{

     int nodes;
    cout<<"enter number of nodes "<<endl;
    cin>>nodes;

    int u,v;

    

    vector<vector<int>>graph(nodes);

    for (int i = 0; i < nodes; i++)
    {
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    
    for (int i = 0; i < nodes; i++)
    {
        cout<<i<<"->";
        for (int j = 0; j < graph[i].size(); j++)
        {
            cout<<graph[i][j];
        }
        cout<<endl;
        
        
    }
    
}