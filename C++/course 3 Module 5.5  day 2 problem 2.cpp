#include<bits/stdc++.h>

using namespace std;

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
    sort(a.begin(),a.end());
    int q;
    cin>>q;



    for(int i=0;i<q;i++)
    {

        int lob;
        cin>>lob;
        int low=0,high= a.size()-1,mid;

        int flag=0;
        while(high>=low)
        {
            mid=(high+low)/2;
            if(lob>a[mid])
            {
                low=mid+1;

            }
            if(lob<a[mid])
            {
                high=mid-1;


            }
            if(a[mid]==lob)
            {
                cout<<"YES"<<endl;
                flag++;
                break;
            }
        }
        if(flag==0)
        {
            cout<<"NO"<<endl;

        }



    }

}
