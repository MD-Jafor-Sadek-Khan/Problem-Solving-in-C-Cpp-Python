#include<bits/stdc++.h>

using namespace std;
void Binary_Search(vector<int>a,int k)
{
    int high = a.size()-1;
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
        else if(k<a[mid])
        {
            high=mid-1;
        }
        else if(a[mid]==k)
        {

            flag=mid;
            break;
        }



    }
    if(a[flag-1]==k || a[flag+1]==k)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }

}

int main()
{
    int n,k;

    cin>>n;
    vector<int>a;
    a.resize(n);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];


    }

    cin>>k;

    Binary_Search(a,k);

}

