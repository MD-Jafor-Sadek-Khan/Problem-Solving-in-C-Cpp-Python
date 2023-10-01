#include<bits/stdc++.h>

using namespace std;

vector<int> merg(vector<int> a1,int* inv)
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

    int id1=0,id2=0;
    vector<int> f_a;
    vector<int>f_b;
    vector<int>f_a1;

     f_a=merg(a,inv);
     f_b=merg(b,inv);



    int iv1=0,iv2=0;

    for(int i=0;i<a1.size();i++)
    {
        if(id1==f_a.size())
       {
           f_a1.push_back(f_b[id2]);
           id2++;
       }
       else if(id2==f_b.size())
       {
           f_a1.push_back(f_a[id1]);
           id1++;
       }
       else if(f_a[id1]<=f_b[id2])
       {
           f_a1.push_back(f_a[id1]);
           id1++;
       }
       else
       {
           f_a1.push_back(f_b[id2]);
           *inv=*inv+f_a.size()-id1;
           id2++;
       }

    }
    return f_a1;




}



int main()
{

    int n;
    cin>>n;

    vector<int>a(n);

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    vector<int> result;

    int b=0;
    result= merg(a,&b);



    cout<<b;


}
