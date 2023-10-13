#include<bits/stdc++.h>

using namespace std;

vector<int> count_sort(vector<int> a)
{
    int n=a.size();
    vector<int> b(n);
    for(int i=0;i<n;i++)
    {
        b[a[i]]=b[a[i]]+1;
    }

    int c=0;
    for(int i=0;i<n;i++)
    {
        c+=b[i];
    }

    for(int i=0,j=0;i<c;i++)
    {
        if(b[i]>0)
        {
            a[j]=i;
            b[i]--;
            i--;
            j++;
        }
    }

    return a;

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

    a=count_sort(a);

    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

}
