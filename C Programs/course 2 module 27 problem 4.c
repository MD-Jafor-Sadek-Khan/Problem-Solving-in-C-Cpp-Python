#include<stdio.h>

func(int N);

int main(){

int t;
scanf("%d",&t);

int j[t+1];
for(int i=0;i<t;i++){
    int N;
    scanf("%d",&N);
    j[i]=func(N);


}

    for(int i=0;i<t;i++){

        printf("%d+%d+%d+%d\n",j[i],j[i]+2,j[i]+4,j[i]+6);
    }

}


func(int N){

for(int i=0;i<=N;i++){

    if(i%2==0){
        if(i+(i+2)+(i+4)+(i+6)==N){

            return i;



        }
    }



}



}

