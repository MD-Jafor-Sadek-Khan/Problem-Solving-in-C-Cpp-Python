#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>> n;
    vector<int> a(n);
    for(int i=0;i<n;i++)

    {
        cin>>a[i];

    }




    int m;
    cin>>m;

    vector<int> b(m);

    for(int i=0;i<m;i++)

    {
        cin>>b[i];

    }
    vector<int>k;

    for(int i=0;i<n;i++)
    {
       for(int j=0;j<m;j++)
       {

           if(a[i]==b[j])
           {

               k.push_back(a[i]);
           }
       }

    }

for(int i=0;i<k.size();i++)
{
        cout<<k[i]<<" ";
}




}
