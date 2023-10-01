#include<stdio.h>
#include<string.h>

int main(){


int n,m;

scanf("%d%d",&m,&n);

int arr[n][m];
int zz=0;
printf("\n");
for(int z=0;z<2;z++){

   for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){


    scanf("%d",&zz);
        if(z==1){

           arr[i][j]+=zz;
        }
        else{
            arr[i][j]=zz;
        }


    }

}
printf("\n");

}
printf("\n");
printf("\n");
 for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      printf("%d ",arr[i][j]);
    }printf("\n");
    }


}
