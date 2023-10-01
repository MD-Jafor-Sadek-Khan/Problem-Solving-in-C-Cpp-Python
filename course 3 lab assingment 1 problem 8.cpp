#include<bits/stdc++.h>
using namespace std;

vector<int> even_generator (vector<int>a)
{

    vector<int>result;

    for(int i=0;i<a.size();i++)
    {
        if(a[i]%2==0)
        {
            result.push_back(a[i]);
        }
    }



    return result;
}

int main()
{


    vector<int>a={1,2,3,4,5};




    a=even_generator(a);

    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<" ";
    }

}
