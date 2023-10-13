#include<bits/stdc++.h>
using namespace std;

void check(vector<int>b,vector<int>c)

{
    int countt=0;
    for(int i=0;i<b.size();i++)
    {
        if(c[b[i]]==1)
        {
            countt++;
        }
    }
    if(countt==b.size())
    {
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

}




int main()
{
    int n;
    cin>>n;
    vector<int>b(n);

    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }



    int m;
    cin>>m;
    vector<int>a(m);
    vector<int>c;

    for(int i=0;i<m;i++)
    {
        cin>>a[i];
    }


    for(int i=1;i<=m;i++)
    {
        if(a[i-1]>a[i])
        {
            swap(a[i],a[i+1]);
        }
    }

   c.resize(a[0]);

    for(int i=0;i<a.size();i++)
    {
        c[a[i]]=1;
    }



    check(b,c);


}
