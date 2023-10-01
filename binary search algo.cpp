#include<bits/stdc++.h>

using namespace std;


int main()
{
    int n,k;

    cin>>n>>k;
    vector<int>a;
    a.resize(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];


    }


    int high = n-1;
    int low=0;
    int flag=0;
    int mid=0;
    while(high>=low)
    {
        mid=(high+low)/2;

        if(k>a[mid])
        {
            low=mid+1;

        }
        else if(k<a[mid]){
            high=mid-1;
        }
        else if(a[mid]==k)
        {
            cout<<"YES "<<"   index = "<<mid;
            flag++;
            break;

        }



    }
    if(flag==0)
    {
        cout<<"no";
    }

}
