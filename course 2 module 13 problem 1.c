#include<stdio.h>
#include<string.h>


int main(){

        char arr[10000];

        int t[1000];
        int z[1000];
        fgets(arr,sizeof(arr),stdin);

        int l= strlen(arr);
        for(int i=0;i<l;i++){

                for(int j=0;j<26;j++){

                    if(arr[i]==97+j){

                        t[arr[i]]=t[arr[i]]+1;

                    }

                }

        }


                for(int i=97;i<=122;i++){


                    if(t[i]>0){

                        {



                            z[t[i]]=i;

                        }


                    }

                }

                for(int i=26;i>0;i--){

                    if(z[i]>=97 && z[i]<=122){


                        for(int j=0;j<i;j++){
                            printf("%c",z[i]);

                        }


                    }



                }








}
