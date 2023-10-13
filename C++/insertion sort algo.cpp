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



    for(int i=1;i<n;i++)
    {
        int dummy=i;

        while(dummy>=1)
        {
            if(a[dummy-1]>a[dummy])
            {
                swap(a[dummy-1],a[dummy]);
                dummy--;
            }
            else
            {
                break;
            }

        }
    }

    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

}
