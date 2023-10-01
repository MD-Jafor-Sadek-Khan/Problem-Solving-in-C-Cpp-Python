#include<Stdio.h>
char capital_small(char arr){



        if(arr>=65 && arr<=90){

            arr+=32;return arr;



        }
        else if(arr>='a' && arr<='z'){


            arr-=32;
            return arr;
        }
        else
        return arr;
}

int main(){

    char arr[10000];
    scanf("%s",arr);
    getchar();

    int l=strlen(arr);
    char j;
    for(int i=0;i<l;i++){

       j=capital_small(arr[i]);
         arr[i]=j;





    }



    printf("%s",arr);




}
