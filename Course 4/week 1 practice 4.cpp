#include<bits/stdc++.h>

using namespace std;


int main ()
{
    // adj matrix
    int node;
    cout<<"node= ";
    cin>>node;

    int arr[node][node];
    for (int i = 0; i < node; i++)
    {
        for (int j = 0; j < node; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    

    // adj matrix 
    //   1 2 3
    // 1 0 0 1
    // 2 1 0 0
    // 3 0 1 0

// adj list
    // 1={3}
    // 2={1}
    // 3={2}


    // covertion part 
    
    vector<vector<int>>adj_list(node);


    for (int i = 0; i < node; i++)
    {
        for (int j = 0; j < node; j++)
        {
            if(arr[i][j]==1)
            {
                adj_list[i].push_back(j+1);
            }
            
        }
        
    }

    cout<<"adj matrix to adj list"<<endl;

    {
        for (int i = 0; i < node; i++)
        {
            cout<<i+1<<"-> ";
            for (int j = 0; j < adj_list[i].size(); j++)
            {
                cout<<adj_list[i][j]<<", ";
            }
            cout<<endl;
            
        }
        
    }
    
    cout<<"adj list to adj matrix"<<endl;



    // adj list
    // 1={3}
    // 2={1}
    // 3={2}

    // adj matrix 
    //   1 2 3
    // 1 0 0 1
    // 2 1 0 0
    // 3 0 1 0

    int arr2[node][node]={};

    for (int i = 0; i < node; i++)
    {
        for (int j = 0; j < adj_list[i].size(); j++)
        {
            arr2[i][adj_list[i][j]-1]=1;
        }
        
    }

    for (int i = 0; i < node; i++)
    {   
        cout<<i+1<<"-> ";
        for (int j = 0; j < node; j++)
        {
            cout<<arr2[i][j]<<", ";
        }

        cout<<endl;
        
    }
    

    
}