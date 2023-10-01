#include<bits/stdc++.h>
using namespace std;
int main(){

int n;
cin>>n;
vector<int>a;
a.resize(n);
int sum=1;
for(int i=0;i<n;i++)
{
    cin>>a[i];
    if(i%2==1)
    {
        sum=sum*a[i];
    }
}

cout<<sum;
}
