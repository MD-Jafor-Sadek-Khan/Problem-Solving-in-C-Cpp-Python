#include<stdio.h>
struct student{

    int marks;

    int roll;
    char name[70];
};

int main(){


    printf("Enter information:\n");


    struct student s;

    printf("Enter name: ");

        scanf("%s",s.name);

     printf("Enter roll number: ");

        scanf("%d",&s.roll);

     printf("Enter marks: ");

        scanf("%d",&s.marks);


//  //////////////////////////////////////


    printf("\n\nDisplaying information:\n");



    printf("Name: ");

        printf("%s",s.name);

     printf("\nRoll number: ");

        printf("%d",s.roll);

     printf("\nMarks: ");

        printf("%d\n\n\n\n",s.marks);






}
