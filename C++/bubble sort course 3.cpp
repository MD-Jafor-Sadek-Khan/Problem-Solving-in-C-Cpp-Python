#include<bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin>>n;

    vector<int>a(n);

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

/*

5
64 99 5 8 12
*/

    int t=0;
    for(int pass=0;pass<n-1;pass++)

    {
        int temp;

        bool flag=true;
        for(int i=0;i<n-1-pass;i++)
        {
            if(a[i]>a[i+1])
            {
            temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;

            flag=false;

            }






        }


      /* if(flag)
        {
            break;
        }*/


    }

cout<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
