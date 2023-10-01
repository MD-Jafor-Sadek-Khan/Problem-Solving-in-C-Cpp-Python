#include<stdio.h>
#include<string.h>

int main(){

    char arr[1000];

    fgets(arr,sizeof(arr),stdin);



    int l= strlen(arr);
    int c=0;
    int j,i;


    for(i=0,j=l-2;i<l && j>=0;i++,j--){



            if(arr[i]!=arr[j]){

                c++;

            }








    }
    if(c>0){

            printf("NO");
        }
        else{
            printf("YES");
        }




return 0;

}
