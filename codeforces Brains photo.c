#include<stdio.h>

int main(){

int row,col,c=0;
scanf("%d%d",&row,&col);

char z;
int f=row*col;
for(int i=0;i<f;i++){

    scanf("%s",&z);

    if(z==67 || z==77 || z==89){

        c++;
    }


}
if(c>0){
    printf("#Color");
}
else{
    printf("#Black&White");
}

}
