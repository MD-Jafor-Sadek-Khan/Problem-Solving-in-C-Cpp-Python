#include<stdio.h>


int main(){

int r;
scanf("%d",&r);

int arr[3][3];


for(int i=0;i<3;i++){

for(int j=0;j<3;j++){

    arr[i][j]=0;

}

}
int x,y;
for(int z=0;z<r;z++){
    scanf("%d%d",&x,&y);

     arr[x-1][y-1]=1;



}
printf("\n");

for(int i=0;i<3;i++){

for(int j=0;j<3;j++){

    if(arr[i][j]==0){

        printf("%d %d\n",i+1,j+1);


    }
printf("{%d %d} =%d\n",i+1,j+1,arr[i][j]);

}

}

}
