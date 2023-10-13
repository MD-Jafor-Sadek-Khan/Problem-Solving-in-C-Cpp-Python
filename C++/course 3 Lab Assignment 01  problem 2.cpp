#include<bits/stdc++.h>

using namespace std;
void findd(vector<int>a)
{
        int sizee=a.size()+2;
        vector<int>b(sizee);

        for(int i=0;i<a.size();i++)
        {
            b[a[i]]=1;
        }

        for(int i=1;i<b.size();i++)
        {
            if(b[i]==0)
            {
                cout<<i;
                break;
            }
        }


}
int main()
{

    int n;
    cin>>n;

    vector<int>a(n-1);

    for(int i=0;i<n-1;i++)
    {
        cin>>a[i];
    }


    findd(a);




}

