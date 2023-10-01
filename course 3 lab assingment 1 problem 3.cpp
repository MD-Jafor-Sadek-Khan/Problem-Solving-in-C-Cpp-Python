#include<bits/stdc++.h>
#include<cmath>
using namespace std;

vector<int> merg(vector<int> a,int* r,int k)
{

    if(a.size()<=1)
    {

        return a;

    }



    vector<int> b,c;
    int mid=a.size()/2;
    for(int i=0; i<mid; i++)
    {

        b.push_back(a[i]);
    }

    for(int i=mid; i<a.size(); i++)
    {

        c.push_back(a[i]);
    }

    vector<int> fb,fc;

    fb=merg(b,r,k);
    fc=merg(c,r,k);

    int idb=0,idc=0;
    int ivb=0,ivc=0;
    vector<int> result;

    for(int i=0; i<=a.size()*log(a.size()); i++)
    {


        if(ivc==fc.size())
        { }

         if(fb[ivb]+fc[ivc]==k)
        {

            *r=*r+1;
            ivb=0;
            ivc++;
        }
        else if(fb[ivb]+fc[ivc]>k)
        {

            ivb=0;
            ivc++;
        }
        else
        {

            ivb++;
        }

        if(ivb==fb.size())
        {

            ivb=0;
            ivc++;
        }



        if(idb==fb.size() && idc==fc.size() )
        {

        }

        else if(idb==fb.size())
        {

            result.push_back(fc[idc]);
            idc++;

        }
        else if(idc==fc.size())
        {

            result.push_back(fb[idb]);

            idb++;

        }
        else if(fb[idb]<fc[idc])
        {

            result.push_back(fb[idb]);

            idb++;

        }
        else
        {

            result.push_back(fc[idc]);


            idc++;
        }




    }



    return result;


}



int main()
{

    int n;
    cin>>n;

    vector<int> a;
    a.resize(n);

    for(int i=0; i<n; i++)
    {
        cin>>a[i];

    }


    int k;
    cin>>k;
    int r=0;



    a=merg(a,&r,k);



    cout<<r;


}


