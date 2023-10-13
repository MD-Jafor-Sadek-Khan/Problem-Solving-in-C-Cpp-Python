#include<bits/stdc++.h>

using namespace std;

vector<int> quick(vector<int> a1)
{
    if(a1.size()<=1)
    {
        return a1;
    }

    int pivot = rand() % a1.size();



    vector<int>a,b,fa,fb,r;



    for(int i=0;i<a1.size();i++)
    {
        if(i==pivot)
        {

            continue;
        }
        if(a1[i]>=a1[pivot])
        {
            a.push_back(a1[i]);
        }
        else
        {
            b.push_back(a1[i]);
        }
    }
        fa=quick(a);
        fb=quick(b);

        for(int i=0;i<fa.size();i++)
        {

            r.push_back(fa[i]);
        }
        r.push_back(a1[pivot]);

         for(int i=0;i<fb.size();i++)
        {
            r.push_back(fb[i]);
        }









    return r;

}
int main()
{
    int n;
    cin>>n;

    vector<int>a,r;

    a.resize(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    r=quick(a);


    for(int i=0;i<r.size();i++)
    {
        cout<<r[i]<<" ";
    }



}
