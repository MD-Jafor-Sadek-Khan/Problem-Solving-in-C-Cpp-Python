#include<bits/stdc++.h>

using namespace std;

vector<int> merg(vector<int> a1,string* x,int k)
{
    if(a1.size()<=1)
    {
        return a1;
    }
    int mid=a1.size()/2;

    vector<int>a,b,fa,fb,r;

    for(int i=0;i<mid;i++)
    {
        a.push_back(a1[i]);
    }
    for(int i=mid;i<a1.size();i++)
    {
        b.push_back(a1[i]);
    }

    fa=merg(a,x,k);
    fb=merg(b,x,k);

   int ida=0;
    int idb=0;

    for(int i=0;i<a1.size();i++)
    {

            if(fa[ida]+fb[idb]==k)
            {

                *x="YES";
            }


        if(ida==fa.size())
        {
            r.push_back(fb[idb]);
            idb++;
        }
        else if(idb==fb.size())
        {
            r.push_back(fa[ida]);
            ida++;
        }
        else if(fa[ida]<=fb[idb])
        {

            r.push_back(fa[ida]);
            ida++;

        }
        else{

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

    merg(a,&l,k);

    cout<<endl<<l;
}
