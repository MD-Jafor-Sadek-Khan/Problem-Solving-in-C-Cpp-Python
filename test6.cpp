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
    int ivb=0,ivc=mid-1;
    for(int i=0; i<mid; i++)
    {
        cout<<"\n\nitterataion count = "<<i+1<<endl<<endl;
        cout<<"a["<<ivb<<"] = "<<a[ivb]<<" + "<<"a["<<ivc<<"] = "<<a[ivc]<<" result = "<<a[ivb]+a[ivc]<<endl;

        if(ivc==ivb)
        {cout<<endl<<"no no "<<endl;}

         if(a[ivb]+a[ivc]==k)
        {
            *r=*r+1;
            cout<<"Found r = "<<*r<<endl;

            ivb++;
        }


        if(ivb+1==ivc)
        {
            ivb=0;
            ivc--;
        }
        b.push_back(a[i]);
    }

    for(int i=mid; i<a.size(); i++)
    {

        cout<<"\n\nitterataion count = "<<i+1<<endl<<endl;
        cout<<"fb["<<ivb<<"] = "<<b[ivb]<<" + "<<"fc["<<ivc<<"] = "<<c[ivc]<<" result = "<<b[ivb]+c[ivc]<<endl;

        if(ivc==c.size())
        {cout<<endl<<"no no "<<endl;}

         if(b[ivb]+c[ivc]==k)
        {
            *r=*r+1;
            cout<<"Found r = "<<*r<<endl;
            ivb=0;
            ivc++;
        }
        else if(b[ivb]+c[ivc]>k)
        {
            ivb=0;
            ivc++;
        }
        else
        {
            ivb++;
        }
        c.push_back(a[i]);
    }

    vector<int> fb,fc;

    fb=merg(b,r,k);
    fc=merg(c,r,k);

    int idb=0,idc=0;

    vector<int> result;

    cout<<endl<<endl;

    cout<<"f[b]"<<" its size = "<<fb.size()<<endl;
    for(int i=0; i<fb.size(); i++)
    {
        cout<<fb[i]<<" ";
    }
    cout<<endl;


    cout<<"f[c]"<<" its size = "<<fc.size()<<endl;
    for(int i=0; i<fc.size(); i++)
    {
        cout<<fc[i]<<" ";
    }

    cout<<endl<<endl<<endl;

    for(int i=0; i<=a.size(); i++)
    {






        if(idb==fb.size() && idc==fc.size() )
        {
            cout<<endl<<"no no no "<<endl;
        }

        else if(idb==fb.size())
        {
            result.push_back(fc[idc]);
            cout<<endl<<"Pushed in result = "<<result[result.size()-1]<<endl;
            idc++;

        }
        else if(idc==fc.size())
        {
            result.push_back(fb[idb]);
            cout<<endl<<"Pushed in result = "<<result[result.size()-1]<<endl;
            idb++;

        }
        else if(fb[idb]<fc[idc])
        {
            result.push_back(fb[idb]);
            cout<<endl<<"Pushed in result = "<<result[result.size()-1]<<endl;
            idb++;

        }
        else
        {
            result.push_back(fc[idc]);
            cout<<endl<<"Pushed in result = "<<result[result.size()-1]<<endl;

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

    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";

    }

    cout<<endl<<"result "<<r;


}
