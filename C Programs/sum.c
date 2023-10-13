#include<stdio.h>

int main()
{
    FILE* i;
    i=fopen("input.txt","r");
    char c;
    while(1){
     c=fgetc(i);
     if(c==EOF)
     {
         break;

     }

     FILE* o;
     o=fopen("output.txt","w");

    fputc(c,o);

}



    return 0;
}
