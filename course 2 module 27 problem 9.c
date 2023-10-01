#include<stdio.h>

prime(int n,int* p);
avrage(int n,int* p);
int main(){

int n;
scanf("%d",&n);

int arr[n+1];

for(int i=0;i<n;i++)
{


scanf("%d",&arr[i]);
}



int* p=&arr;
prime(n,p);
avrage(n,p);


}

prime(int n,int* p){




        int c=0;
        for(int i=0;i<n;i++){
            if(*(p+i)!=0 && *(p+i)!=1){
                    if(*(p+i)==2 || *(p+i)==3 || *(p+i)==5 || *(p+i)==7 || *(p+i)==11){

                        c++;

                    }
                    else{
                            if(*(p+i)%2!=0 && *(p+i)%3!=0 && *(p+i)%5!=0 && *(p+i)%7!=0 && *(p+i)%11!=0){

                            c++;

                            }

                    }



            }



        }

printf("Prime numbers: %d",c);
}

avrage(int n,int* p){



        int c=0,l=0;
        for(int i=0;i<n;i++){


            if(*(p+i)%2!=0)
            {

                c=c+*(p+i);
                l++;
            }
        }

printf("\nAverage of all even integers: %d.00",c/l);
}
