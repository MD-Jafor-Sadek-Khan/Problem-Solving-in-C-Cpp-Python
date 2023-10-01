#include<bits/stdc++.h>
using namespace std;
vector<int> merg(vector<int>a1,int k,int* c)
{
    if(a1.size()<=1)
    {
        return a1;
    }

    int mid=a1.size()/2;

    vector<int>a,b,fa,fb,result;

    for(int i=0;i<mid;i++)
    {
        a.push_back(a1[i]);
    }

    for(int i=mid;i<a1.size();i++)
    {
        b.push_back(a1[i]);
    }

    fa=merg(a,k,c);
    fb=merg(b,k,c);

    int ia=0,ib=0;


    for(int i=0;i<a1.size();i++)
    {






        if(ia==fa.size())
        {
            result.push_back(fb[ib]);
            ib++;
        }
        else if(ib==fb.size())
        {
            result.push_back(fa[ia]);
            ia++;
        }



        else if(fa[ia]<fb[ib])
        {

            result.push_back(fa[ia]);
            ia++;

        }
        else if(fa[ia]>=fb[ib])
        {

            result.push_back(fb[ib]);
            ib++;

        }
    }


    return result;

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

    int k;
    cin>>k;
    int c=0;
    merg(a,k,&c);


    cout<<c;




}
