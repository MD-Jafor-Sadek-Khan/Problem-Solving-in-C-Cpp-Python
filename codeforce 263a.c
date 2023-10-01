#include<stdio.h>

int main(){


int arr[5][5];
int a2[10];
for(int i=0;i<5;i++){


for(int j=0;j<5;j++){

scanf("%d",&arr[i][j]);

    if(arr[i][j]==1){
        a2[0]=i+1;
        a2[1]=j+1;
    }


}}

int sum=0;
if(3>a2[0] && 3>a2[1]){

     sum=(3-a2[0])+(3-a2[1]);

}
else if(3<a2[0] && 3<a2[1]){
     sum=(a2[0]-3)+(a2[1]-3);
}
else if(3<a2[0] && 3>a2[1]){
     sum=(a2[0]-3)+(3-a2[1]);
}
else if(3>a2[0] && 3<a2[1]){
     sum=(3-a2[0])+(a2[1]-3);
}
else if(3==a2[0] && 3<a2[1]){
     sum=(a2[1]-3);
}
else if(3==a2[0] && 3>a2[1]){
     sum=(3-a2[1]);
}
else if(3>a2[0] && 3==a2[1]){
     sum=(3-a2[0]);
}
else if(3<a2[0] && 3==a2[1]){
     sum=(a2[0]-3);
}
else if(3==a2[0] && 3==a2[1]){
     sum=0;
}


printf("%d",sum);









}
