#include "stdio.h"
#include "malloc.h"
#include "call.c"
#include "stringCat.c"
#include "convertText.c"

#include "stringCmp.c"
/*struct student {
    int rn;
    char name[10];
};
typedef struct student good_student;

int main()
{
  good_student s1 ={23,"aasj"};
    printf("%lu",s1.rn);
    good_student *s2;
    s2->rn;
    printf("This linr hti %d",s2->rn);

}*/

/*int *func(int n){
    int *p;
    p= (int *)malloc(n*sizeof(int));
    return p;

}

int main(){
    int *A;
    A=func(5);
    printf("Array address is = %d",A);
    free(A);
    printf("Array address is = %d",A);
}*/

void printArray(int A[])
{
    A[2] = 76;
}

int main()
{
    // char num[]= printHi();w
    //  int a,b,c,sum;
    //  scanf("%d %d %d",&a,&b,&c);
    //  printf("sum is: %d",a+b);
    // int a[5][3]={{2,3,5},{3,5,2}};
    //     int l=sizeof(a) / sizeof(a[0]);
    //     int *ptr=a[0];

    //     printf("Array elements: ");

    //     for (int i=0; i<=l;i++){
    //         printf("%d ", *ptr);
    //         ptr++;
    //     }
    //     const char* str = getString();
    // printf("%s\n", str);
    // calsum();

    // int A[5]={1,3,4,5,5};
    // for (int i=0;i<5;i++){
    //     printf("%d",A[i]);
    // }
    // printf("\n");
    // printArray(A);
    // for (int i=0;i<5;i++){
    //     printf("%d",A[i]);
    // }
    // static char des1[]="Aksj2s";
    // static char src1[]="Aksj2t";
    // gets(des1);
    // gets(src1);
    // char* des= des1;
    // char* src= src1;
    // stringCat(des,src);
    //stringCmp(des, src);
    int ch='A';
    printf("%d\n",ch);
    char str1[]="HELLo uyeHd";
    char str2[]="hellO";
    convertToLower(str1);
    convertToUpper(str2);
    return 0;
}