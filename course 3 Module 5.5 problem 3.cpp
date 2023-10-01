#include<bits/stdc++.h>


using namespace std;

int main(){

string a;

cin>>a;

for(int i=0;i<sizeof(a);i++)
{
    if(i%2==0)
    {
     a[i]=a[i]+1;
    }

}

cout<<a;

}
