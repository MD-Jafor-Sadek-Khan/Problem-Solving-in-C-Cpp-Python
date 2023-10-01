#include<stdio.h>

struct detailes{

      int* my_number;



};



int main(){


    struct detailes* me;

    me=(struct detailes*) malloc(sizeof(struct detailes));

    me->my_number=17156;

    printf("%d",me->my_number);

}
