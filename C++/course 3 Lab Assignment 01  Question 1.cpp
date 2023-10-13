#include<bits/stdc++.h>

using namespace std;

vector<int> quicksort(vector<int> a1)
{
    if(a1.size()<=1)
    {
        return a1;
    }

    int pivot=a1.size()-1;
    vector<int> a,b;

    for(int i=0;i<a1.size();i++)
    {
        if(a1[i]>a1[pivot])
        {
            a.push_back(a1[i]);

        }

    }

    for(int i=0;i<a1.size();i++)
    {
        if(a1[i]<a1[pivot])

        {
            b.push_back(a1[i]);

        }
    }



    vector<int>fa,fb;
    fa=quicksort(a);
    fb=quicksort(b);

    vector<int>result;

    for(int i=0;i<fa.size();i++)
    {
        result.push_back(fa[i]);
    }

    result.push_back(a1[pivot]);

    for(int i=0;i<fb.size();i++)

        {
            result.push_back(fb[i]);
        }


    return result;


}



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


    a=quicksort(a);

    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }


}
