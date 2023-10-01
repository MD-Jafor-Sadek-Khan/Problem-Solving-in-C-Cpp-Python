#include<stdio.h>
#include<string.h>

void even(int n){


    for(int i=1;i<=n;i++)
    if(i%2==0)
        printf("%d ",i);





}
void odd(int n){


    for(int i=1;i<=n;i++)
    if(i%2==1)
        printf("%d ",i);





}
kth_number(int k,int n){

        int lol=k;

        if(n/2>k){
                int s=-1;
                 for(int i=0;i<n;i+=2){
                     s++;
                     if(s==k){


            printf("\nThe %dth element in this sequence is %d",lol,i);
        }}


        }
        else if(n/2<k){
                k=k-(n/2);
                int j=0;
               for(int i=1;i<n;i+=2){
                    j++;
                     if(j==k){
            printf("\nThe %dth element in this sequence is %d",lol,i);
        }}
        }



}


int main(){

    int n,k;

    scanf("%d%d",&n,&k);


    even(n);
    odd(n);
   kth_number(k,n);










}
