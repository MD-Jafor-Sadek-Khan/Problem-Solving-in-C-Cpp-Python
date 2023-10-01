#include<bits/stdc++.h>

using namespace std;

int findMax(vector<int> a,int n)
{
    if(n==1)
    {
        return a[0];
    }
    else
    {
        int maxx=findMax(a,n-1);
        return a[n-1]>maxx?a[n-1]:maxx;
    }
}

int main()
{
    int n;
    cin>>n;

    vector<int> a(n);
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int maxx=findMax(a,n);
    cout<<maxx<<endl;

    return 0;
}
