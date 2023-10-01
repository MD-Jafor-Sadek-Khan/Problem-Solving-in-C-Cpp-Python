#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

        int t;
    scanf("%d",&t)
     int flag=1;

       for(int z=0;z<5;z++){

          char arr[21];



        flag=1;





    scanf("%s",arr);



    int l=strlen(arr)-1;

    for(int i=0;i<l;i++){

        if(arr[i]!=arr[l-i]){


            flag=0;

        }




    }


    if(flag==0){
        printf("Not Palindrome\n");
    }
    else{

        if(l>7){

            printf("%c%d%c\n",arr[0],l-1,arr[l]);


        }
        else{
            puts(arr);

        }


    }



       }



    return 0;
}
