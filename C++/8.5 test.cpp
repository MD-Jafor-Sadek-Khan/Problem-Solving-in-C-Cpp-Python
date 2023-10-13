#include<bits/stdc++.h>

using namespace std;

vector<int> merg(vector<int> a1,string* x,int k,int* comp)
{
    if(a1.size()<=1)
    {
        *comp=*comp+1;
        return a1;
    }
    int mid=a1.size()/2;

    vector<int>a,b,fa,fb,r;

    for(int i=0;i<mid;i++)
    {
        *comp=*comp+1;
        a.push_back(a1[i]);
    }
    for(int i=mid;i<a1.size();i++)
    {
        *comp=*comp+1;
        b.push_back(a1[i]);
    }

    fa=merg(a,x,k,comp);
    fb=merg(b,x,k,comp);

   int ida=0;
    int idb=0;

    for(int i=0;i<a1.size();i++)
    {

            if(fa[ida]+fb[idb]==k)
            {

                *comp=*comp+1;
                *x="YES";
            }


        if(ida==fa.size())
        {
            *comp=*comp+1;
            r.push_back(fb[idb]);
            idb++;
        }
        else if(idb==fb.size())
        {
            *comp=*comp+1;
            r.push_back(fa[ida]);
            ida++;
        }
        else if(fa[ida]<=fb[idb])
        {
            *comp=*comp+1;
            r.push_back(fa[ida]);
            ida++;

        }
        else{
            *comp=*comp+1;
             r.push_back(fb[idb]);
             idb++;
        }



    }

    return r;




}


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

    string l="NO";

    int k;


    cin>>k;

    int comp=0;
    merg(a,&l,k,&comp);

    cout<<endl<<l<<endl<<comp;
}

