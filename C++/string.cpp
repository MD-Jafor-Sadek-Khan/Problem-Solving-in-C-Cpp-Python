#include<bits/stdc++.h>

using namespace std;
int main()

{
    vector<int>a={0};

    for(int i=0;i<10;i++)
    {
        a.insert(a.size()+1,i);

    }

    a.resize(15);
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<endl;

    }

    return 0;

}
