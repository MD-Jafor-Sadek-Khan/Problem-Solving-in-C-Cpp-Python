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

    vector<int>lob;

    lob.push_back(a[0]);
    /*
5
3 2 4 5 1

[2][3][4][1][5]

i=1
itt 1:  3 2
sw: 2 3

i=2

itt 2: 2 3 4


i=3

itt 3: 2 3 4 1



*/


   for(int i=1;i<a.size();i++)
    {
        lob.push_back(a[i]);
        bool flag=true;
        for(int j=lob.size()-1;j>0;j--)
        {
            if(lob[j-1]>lob[j])
            {
                int temp = lob[j-1];
                lob[j-1]=lob[j];
                lob[j]=temp;

                flag=false;
            }
            if(flag)
            {
                break;
            }
        }






    }







    cout<<endl;
    for(int i=0;i<lob.size();i++)
    {
        cout<<"["<<lob[i]<<"]";
    }

}
