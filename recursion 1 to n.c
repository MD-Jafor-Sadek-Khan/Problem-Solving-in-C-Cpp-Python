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

int sum(int i,int n)
{

    int s=0;
    if(i<n)
        return s=sum(i,n)+sum(i+1,n);

    else if(i>n)
        return 0;




}



int main(){

int n;
scanf("%d",&n);

solve(n);
printf("\n");
reverse_solve(n);
printf("\n");
int i=1;
int sum1=sum(i,n);
printf("%d",sum1);


}
