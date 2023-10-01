#include<stdio.h>

int main()
{
    int a=2;

    int p=&a;

    int* q=&a;
//how pointer accesses the pointed variables value
    printf("var=%p\npoint=%p\n",p,q);
    printf("var=%d\npoint=%d\n",p,*q);

//how pointer changer variables value
   *q=7;
    p=8;
    printf("var=%d\npoint=%d\n",p,*q);
    printf("1st a=%d\n",a);

    // how 2 pointers store address
    int* z;

    z=q;

    printf("2nd a=%d\n",a);
    printf("pointer=%p z=%p a=%p",q,z,&a);

//pointer to pointer assingment

int** x=&q;

    **x=14;
printf("\nq=%p",q);
printf("\na=%d",a);

    printf("\npointer q=%p x=%p a=%p",q,x,&a);

    z=&q;
    printf("\npointer q=%p z=%p a=%p",q,z,&a);

    printf("\n\npointer=%d z=%d a=%d",*q,*z,a);
    printf("\npointer q=%d x=%d a=%d\n",*q,*x,a);

    *x=99;
    *z=103;

    printf("2nd pass");
    printf("\n\npointer=%d z=%d a=%d",q,z,a);
    printf("\npointer q=%d x=%d a=%d\n",q,*x,a);

      *z=103;
    *x=99;
    printf("3nd pass");
    printf("\n\npointer=%d z=%d a=%d",q,z,a);
    printf("\npointer q=%d x=%d a=%d\n",q,*x,a);

}
