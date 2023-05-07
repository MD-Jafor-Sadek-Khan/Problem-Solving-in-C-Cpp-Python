#include <bits/stdc++.h>
using namespace std;

int main()
{
    int node=4;
    vector<pair<int,int>>adj_list[node];

    //adj_list[0].push_back({1,2});
    adj_list[0]={{1,2},{2,2}};

    for (int i=0; i<node; i++) {
        cout<<"->";
        for (int j=0; j<adj_list[i].size(); j++) {
            cout<<adj_list[i][j].first<<", "<<adj_list[i][j].second<<", ";
        }
        cout<<endl;
        
    }
}