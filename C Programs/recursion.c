#include<stdio.h>

void solve(int n){

    if(n<1)
        return;

    printf("%d ",n);
    solve(n-1);

}

void reverse_solve(int n){

    if(n<1)
        return;

    reverse_solve(n-1);
    printf("%d ",n);


}

int sum(int s,int n)
{

    if(s>n)
        return 0;
    printf("%d ",s+sum(s+1,n));








}



int main(){

int n;
scanf("%d",&n);

solve(n);
printf("\n");


reverse_solve(n);
printf("\n");


sum(1,n);



}
