#include<stdio.h>


int main(){
int x,y;
scanf("%d%d",&x,&y);

int arr[x+1][y+1];
char z;
for(int i=0;i<x;i++){
    for(int j=0;j<y;j++){

        scanf("%d",&z);
        arr[i][j]=z;
    }
}
for(int i=0;i<x;i++){
    for(int j=0;j<y;j++){

     if(arr[i][j]==67 || arr[i][j]==89 || arr[i][j]==77){
     printf("#Color");
     }
     else{
     printf("#Black&White");}
    }

}







}
