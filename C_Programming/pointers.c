#include "stdio.h"

int main(){
    int a[]={2,5,6,7,8};
    int *p=a;
    printf("%d \n",(*p)++);
    printf("%d\n",*p);

    // float f=10.4;
    // int *q=(int *)&f;
    // printf("%d\n",*q);
    return 0;

}