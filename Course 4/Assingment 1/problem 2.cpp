#include<bits/stdc++.h>
using namespace std;

int pow(int x, int y)
{
    if(y==0)
    {
        return 1;
    }
    if(y==1)
    {
        return x;
    }
    
    int sum=pow(x,y-1);

    return x*sum;



}




int main()
{

    int n,m;
    cin>>n>>m;

    cout<<pow(n,m);


}