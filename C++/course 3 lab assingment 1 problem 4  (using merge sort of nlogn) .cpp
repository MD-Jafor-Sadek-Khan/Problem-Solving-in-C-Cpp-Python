#include<bits/stdc++.h>

using namespace std;
vector<int> mergesort(vector<int>a,int* itr,int n)
{

    if(a.size()<=1)
    {
        return a;
    }


    vector<int>b;
    vector<int>c;

    int mid=a.size()/2;

    for(int i=0;i<mid;i++)
    {
        b.push_back(a[i]);
    }

    for(int i=mid;i<a.size();i++)
    {
        c.push_back(a[i]);
    }

    vector<int>sorted_b=mergesort(b,itr,n);
    vector<int>sorted_c=mergesort(c,itr,n);

    int id1=0;
    int id2=0;
    vector<int> sorted_a;


for(int i=0;i<a.size();i++)
{


    if(id1==b.size())
    {
        sorted_a.push_back(sorted_c[id2]);
        id2++;
    }
    else if(id2==c.size())
    {
        sorted_a.push_back(sorted_b[id1]);
        id1++;
    }
    else if(sorted_b[id1]<sorted_c[id2])
    {
        sorted_a.push_back(sorted_b[id1]);
        id1++;
    }

    else
    {
        sorted_a.push_back(sorted_c[id2]);
        id2++;
    }
}


    if(*itr==sorted_a.size())
    {   int countt=0;
        for(int i=0;i<sorted_a.size()-1;i++)
        {
            if(sorted_a[i]==sorted_a[i+1])
            {
                countt++;
            }
        }
        if(countt==n)
        {
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }

    }


    return sorted_a;



}


int main()
{
     int n;
    cin>>n;
    vector<int>b(n);
    vector<int>d;
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
        d.push_back(b[i]);
    }

    int m;
    cin>>m;
    vector<int>a(m);

    for(int i=0;i<m;i++)
    {
        cin>>a[i];
        d.push_back(a[i]);
    }

    int itr=a.size()+b.size();

    mergesort(d,&itr,n);
}
