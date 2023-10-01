#include<bits/stdc++.h>

using namespace std;
vector<int> quick(vector<int> a1,int* c);
int pivott(vector<int>a1,int* c);

int main()
{
    int n;
    cin>>n;

    vector<int>a,r;

    a.resize(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int c=0;
    int p=0;

    r=quick(a,&c);


    for(int i=0;i<r.size();i++)
    {
        cout<<r[i]<<" ";
    }



    cout<<endl<<endl<<c;

}
int pivott(vector<int>a1,int* c)
{
     for(int i=0;i<a1.size();i++)
    {
        if(a1[i]<a1[i+1])
        {
            *c=*c+1;
            swap(a1[i],a1[i+1]);
        }
    }


    for(int i=a1.size()-2;i>0;i--)
    {
        if(a1[i]>a1[i-1])
        {
            *c=*c+1;
            swap(a1[i],a1[i-1]);
        }
    }


    int mid= (a1[0]+a1[1]+a1[a1.size()-1]+a1[a1.size()-2])/4;
    int x=0;


    switch (x)
  {


    case 0:

        for(int i=0;i<a1.size();i++)
    {
        if(a1[i]-a1[mid]<5);
        {
            return i;
        }

    }
    x++;

    case 1:
        for(int i=0;i<a1.size();i++)
    {
        if(a1[i]-a1[mid]<10);
        return i;

    }
    x++;

    case 2:
        for(int i=0;i<a1.size();i++)
    {
        if(a1[i]-a1[mid]<20);
        return i;

    }
    x++;

    default:
        for(int i=0;i<a1.size();i++)
    {
        if(a1[i]-a1[mid]<9999);
        return i;

    }
    break;
}




}


vector<int> quick(vector<int> a1,int* c)
{
    if(a1.size()<=1)
    {
        return a1;
    }

    int pivot= pivott(a1,c);

    vector<int>a,b,fa,fb,r;

    for(int i=0;i<a1.size();i++)
    {
        if(i==pivot)
        {
            *c=*c+1;
            continue;
        }
        if(a1[i]<=a1[pivot])
        {
            *c=*c+1;
            a.push_back(a1[i]);
        }
        else
        {
            *c=*c+1;
            b.push_back(a1[i]);
        }
    }
        fa=quick(a,c);
        fb=quick(b,c);

        for(int i=0;i<fa.size();i++)
        {
            r.push_back(fa[i]);
        }
        r.push_back(a1[pivot]);

         for(int i=0;i<fb.size();i++)
        {
            r.push_back(fb[i]);
        }

    return r;

}

