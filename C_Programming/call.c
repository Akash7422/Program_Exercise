#include "stdio.h"
#include "string.h"

const char* getString() {
      static char str[] = "Hello, World!";
    return str;
}

const void calsum(){
    int a[3][3]={{1,2,3},{4,5,6},{4,7,8}};
    int rowSize=sizeof(a)/sizeof(a[0]);
    int colSize=sizeof(a[0])/sizeof(a[0][0]);
    
    for (int r=0;r<rowSize;r++){
        int sum1=0, sum2=0;
        for (int c=0;c<colSize;c++){
            sum1=sum1+a[r][c];
            sum2=sum2+a[c][r];
            if(c==2){
            printf("Sum of %d row is: %d\nSum of %d column is:%d\n",r+1,sum1,r+1,sum2);
            }
        }
    }



}