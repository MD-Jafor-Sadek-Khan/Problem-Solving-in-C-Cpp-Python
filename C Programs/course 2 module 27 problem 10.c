#include<stdio.h>

prime(int h,int n,int* p);



int main(){

int n;
scanf("%d",&n);

int h=0;

if(n%2==0){

    h=n/2;

}
else{
    h=(n/2)+1;
}



int arr[n+1];

for(int i=0;i<n;i++)
{


scanf("%d",&arr[i]);
}



int* p=&arr;
prime(h,n,p);



}

prime(int h,int n,int* p){




        int v=0,c=0;
        for(int i=0;i<n;i++){
            for(int j=0;*(p+i)!=0;j++){

                v=*(p+i)%10;
                *(p+i)/=10;
                if(v==7){
                    c++;
                    v=0;
                    break;

                }

            }




            }

            if(c>=h){
             printf("Beautiful");
            }
            else{
                printf("Ugly");
            }





}

