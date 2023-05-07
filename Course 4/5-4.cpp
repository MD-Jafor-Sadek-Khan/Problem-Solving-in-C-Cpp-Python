#include<bits/stdc++.h>

using namespace std;


bool is_palindrome(string x)
{
    if (x =="" || x.size()==1)
    {
        return true;
    }

    int n = x.size();
    string small_str = x.substr(1,n-2);
    return is_palindrome(small_str) && x[0]==x.back();
    
}


int main()
{
    string x;
    cin>>x;
    bool k=is_palindrome(x);
    if(k==true)
    {
        cout<<"palindrome";

    }
    else
    {
        cout<<"not palindrome";
    }
}