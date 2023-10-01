#include<bits/stdc++.h>

using namespace std;
vector<int> merg(vector<int> a1,int* r,int k,int* itr)
{
    if(a1.size()<=1)
    {
        return a1;
    }

    vector<int> a,b;

    int mid=a1.size()/2;
    int iva=0,ivb=a1.size()-1;
    for(int i=0;i<mid;i++)
    {
        if(a1[iva]+a1[ivb]==k)
        {
            *r=*r+1;
            ivb--;
        }
        else{
            ivb--;
        }
        if(ivb<mid)
        {
            ivb=a1.size()-1;
            iva++;
        }
        a.push_back(a1[i]);
    }

    for(int i=mid;i<=a1.size();i++)
    {
        if(i<a1.size())
        {

            if(a1[iva]+a1[ivb]==k)
            {
                *r=*r+1;
                ivb--;
            }
            else
            {
                ivb--;
            }
            if(ivb<mid)
            {
                ivb=a1.size()-1;
                iva++;
            }
            b.push_back(a1[i]);

        }
        else{

            if(a1[iva]+a1[ivb]==k)
            {
                *r=*r+1;
                ivb--;
            }
            else
            {
                ivb--;
            }
            if(ivb<mid)
            {
                ivb=a1.size()-1;
                iva++;
            }
        }

    }

    vector<int> fa,fb;

    fa=merg(a,r,k,itr);
    fb=merg(b,r,k,itr);

    vector<int>result;

    int ial=0,iah=fa.size()-1;
    int ibl=0,ibh=fb.size()-1;
    int ida=0,idb=0;

    for(int i=0;i<a1.size();i++)
    {

        if(*itr==2)
        {
            cout<<*itr<<endl;
            if(iah!=fa.size()-1 || ial!=fa.size()-1)
            {
                if(fa[ial]+fa[iah]==k)
                {
                    *r=*r+1;
                    iah--;
                }


                if(iah==ial)
                {
                    ial++;
                    iah=fa.size()-1;
                }
            }


            if(ibh!=fb.size()-1 || ibl!=fb.size()-1)
            {
                if(fb[ibl]+fb[ibh]!=k)
                {

                    ibh--;
                }
                else
                {
                    *r=*r+1;
                    ibh--;
                }


                if(ibh==ibl)
                {
                    ibl++;
                    ibh=fb.size()-1;
                }
            }

        }

        if(ida==fa.size())
        {
            result.push_back(fb[idb]);
            idb++;
        }
        else if(idb==fb.size())
        {
            result.push_back(fa[ida]);
            ida++;
        }

        else if(fa[ida]<fb[idb])
        {
            result.push_back(fa[ida]);
            ida++;
        }
        else
        {
            result.push_back(fb[idb]);
            idb++;
        }



    }
    *itr=*itr-1;
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
    int iteration=n;

    a=merg(a,&r,k,&iteration);

    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";

    }

    cout<<endl<<"result "<<r;



}
