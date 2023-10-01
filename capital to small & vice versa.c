#include<stdio.h>


int main(){

        char n[100];

        gets(n);

        for(int i=0;n[i]!=0;i++){

            if(n[i]>='a' && n[i]<='z' || n[i]>='A' && n[i]<='Z'){

                if(n[i]>='a' && n[i]<='z'){

                n[i]-=32;


                }
                else{

                n[i]+=32;
                }


            }



        }

puts(n);

}
