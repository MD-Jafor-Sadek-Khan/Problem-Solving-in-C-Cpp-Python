#include<bits/stdc++.h>


using namespace std;


int main()
{
    int n;
    cin>>n;
    vector<int>a;
    a.resize(n);


    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }




    int m;
    cin>>m;
    vector<int>b;
    b.resize(m);

    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }



    int c=0;
    for(int i=0;i<m;i++)
    {
        c=0;
        for(int j=0;j<n;j++)
        {
            if(b[i]==a[j])
            {
               c++;
            }
        }
        if(c==0)
        {
            a.push_back(b[i]);
        }
        for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<" "<<endl;
    }
    }


    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<" ";
    }





}
