#include<bits/stdc++.h>

using namespace std;

vector<int> Range_Remove(vector<int> a,int l,int h)
{
    vector<int> result;

    for(int i=0;i<a.size();i++)
    {

        if(i==l)
        {
            i=h;
            continue;
        }
        result.push_back(a[i]);

    }

    return result;
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
    int l,h;
    cin>>l>>h;

    a=Range_Remove(a,l-1,h-1);

    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<" ";
    }
}
