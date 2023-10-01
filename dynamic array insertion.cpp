#include<bits/stdc++.h>

using namespace std;

class Array{
private:
    int* arr;
    int sz=0;
    int cap=1;

public:
    Array()
    {
        arr=new int[1];
    }

    void push(int x)
    {
        if(cap==sz)
        {
            increase_cap();
        }
        arr[sz]=x;
        sz++;
    }

    void increase_cap()
    {
        cap=cap*2;
        int* temp=new int[cap];

        for(int i=0;i<sz;i++)
        {
            temp[i]=arr[i];
        }
        delete [] arr;
        arr=temp;

    }

    void print()
    {
        for(int i=0;i<sz;i++)
        {
            cout<<"Element no. "<<i<<" = "<<arr[i]<<endl;

        }
    }

    void Insert(int pos,int x)
    {
        if(cap==sz)
        {
            increase_cap();
        }
        for(int i=sz-1;i>=pos;i--)
        {
            arr[i+1]=arr[i];
        }
        arr[pos]=x;
        sz++;
    }

    void pop()
    {
        if(sz==0)
        {
            cout<<"no element to pop"<<endl;
        }
        else
        sz--;
    }

    void Erase(int pos)
    {
        if(sz==0)
        {
            cout<<"NO element in array"<<endl;


        }

        else{

            for(int i=pos+1;i<sz;i++)
            {
                swap(arr[i-1],arr[i]);
            }
            sz--;


        }
    }

};



int main()
{
    Array x;

    x.push(12);
    x.push(13);

    x.push(12);
    x.push(13);

    x.push(12);
    x.push(13);
    x.push(12);
    x.push(13);

    x.Insert(3,999999);






    x.Erase(3);
    cout<<endl<<endl;
    x.print();

}
