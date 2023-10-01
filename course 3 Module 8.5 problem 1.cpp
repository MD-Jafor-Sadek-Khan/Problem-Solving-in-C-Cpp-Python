#include<bits/stdc++.h>


using namespace std;

vector<int> merg(vector<int>a,vector<int> b)
{
    int id1=0,id2=0;
    int sz=a.size()+b.size();
    vector<int> sorted_vec;
    for(int i=0;i<sz;i++)

    {
        if(id1==a.size())
        {
          sorted_vec.push_back(b[id2]);
            id2++;
        }
        else if(id2==b.size())
        {
          sorted_vec.push_back(a[id1]);
            id1++;
        }

        else if(a[id1]>b[id2])
        {
            sorted_vec.push_back(a[id1]);
            id1++;
        }
        else
        {
            sorted_vec.push_back(b[id2]);
            id2++;
        }




    }
    return sorted_vec;
}



int main()
{
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }

        int m;
        cin>>m;
        vector<int> b(m);
        for(int i=0;i<m;i++)
        {
            cin>>b[i];
        }

        vector<int>result;

        result=merg(a,b);
        for(int i=0;i<result.size();i++)
        {
            cout<<result[i]<<" ";
        }

}
