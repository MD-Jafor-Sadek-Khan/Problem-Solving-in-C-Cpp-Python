#include<stdio.h>
char grade(int x);


int main(){


int marks;
scanf("%d",&marks);


printf("%c",grade(marks));





}


char grade(int x){

    if(x>=80 && x<=100){
        return 'A';
    }
    else if(x>=60 && x<=79){

        return 'B';
    }
    else if(x>=40 && x<=59){

        return 'C';
    }
    else if(x>=0 && x<=39){

        return 'F';
    }
    else{
        printf("input your valid mark");
        return 's';
    }



}
