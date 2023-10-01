#include<stdio.h>

int main(){


int n,m;

scanf("%d%d",&n,&m);
printf("\n");
int arr[n+1][m+1];
int a2[n+1][m+1];
int sum[n+1][m+1];


if(n!=m){

    printf("Error");


}
else{

for(int i=0;i<n;i++){

    for(int j=0;j<m;j++){


        scanf("%d",&arr[i][j]);



    }



}
printf("\n");
for(int i=0;i<n;i++){

    for(int j=0;j<m;j++){


        scanf("%d",&a2[i][j]);



    }

}

for(int z=0;z<n;z++){

for(int i=0;i<m;i++){
        sum[z][i]=0;
    for(int j=0;j<n;j++){



        sum[z][i]+=arr[z][j]*a2[j][i];


    }



}

}



printf("\n");
for(int i=0;i<n;i++){

    for(int j=0;j<m;j++){


        printf("%d ",sum[i][j]);



    }
    printf("\n");

}




}

}
