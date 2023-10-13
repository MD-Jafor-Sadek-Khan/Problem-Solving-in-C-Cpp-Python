#include<bits/stdc++.h>


using namespace std;

vector<int> merg(vector<int>a1)
{
    if(a1.size()<=1)
    {
        return a1;
    }


    int mid=a1.size()/2;
    vector<int>a;
    vector<int>b;
    for(int i=0;i<mid;i++)
    {
        a.push_back(a1[i]);
    }
    for(int i=mid;i<a1.size();i++)
    {
        b.push_back(a1[i]);
    }

    vector<int>sorted_a;
    vector<int>sorted_b;


    sorted_a=merg(a);
    sorted_b=merg(b);


    int id1=0,id2=0;

    vector<int> sorted_vec;
    for(int i=0;i<a1.size();i++)

    {
        if(id1==sorted_a.size())
        {
          sorted_vec.push_back(sorted_b[id2]);
            id2++;
        }
        else if(id2==sorted_b.size())
        {
          sorted_vec.push_back(sorted_a[id1]);
            id1++;
        }

        else if(sorted_a[id1]<sorted_b[id2])
        {
            sorted_vec.push_back(sorted_a[id1]);
            id1++;
        }
        else
        {
            sorted_vec.push_back(sorted_b[id2]);
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



        vector<int>result;

        result=merg(a);
        for(int i=0;i<result.size();i++)
        {
            cout<<result[i]<<" ";
        }

}

