#include<stdio.h>


int main(){

   int n1,n2;
   scanf("%d%d",&n1,&n2);

   int arr[n1+1][n2+1];
   for(int i=0;i<n1;i++){

    for(int j=0;j<n2;j++){

    scanf("%d",&arr[i][j]);
    }
   }


   for(int i=0;i<n2;i++){

    for(int j=0;j<n1;j++){

    printf("%d ",arr[j][i]);
    }
    printf("\n");
   }





}
