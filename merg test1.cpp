#include<bits/stdc++.h>

using namespace std;

vector<int> mergesort(vector<int>a,int* r,int k)
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

    vector<int>sorted_b=mergesort(b,r,k);
    vector<int>sorted_c=mergesort(c,r,k);

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
        if(sorted_b[id1]+sorted_c[id2]==k)
        {
            *r=*r+1;
        }
        id2++;
    }
}

    return sorted_a;



}



int main()
{
        int n;
    cin>>n;

    vector<int> a;
    a.resize(n);

    for(int i=0;i<n;i++)
    {
        cin>>a[i];

    }


    int r=0,k;

    cin>>k;


    a=mergesort(a,&r,k);

    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";

    }

    cout<<endl<<r;
}
