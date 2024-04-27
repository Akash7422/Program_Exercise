#include <stdio.h>
#include <stdlib.h>
int count=0,k;
int main()
{ int i,j;
    int row = 5, col = 5;
int matrix[row][col];
    int *p,*q;
    p=&matrix;
    q=p;
    k=p;
    for(i=0;i<row;i++)
        {for (j=0;j<col;j++){
                    if(i>0 || j>0){
                        int num=checkForRepeat(q);
                    *p=num;
                    q=p;
                    p++;
                    count++;
                        }
                    else{
                    int num=(rand() % 25) + 1;
                *p=num;
                count++;
                p++;
            }}}
 
        for(i=0;i<row;i++){
        for(j=0;j<col;j++){
 
            printf("%d\t",matrix[i][j]);
        }
printf("\n");
        }
}
 
int checkForRepeat( int *q){
    int num=(rand() % 25) + 1;
    int temp=q;
    while(q>=k){
 
        if(*q==num){
            num=(rand() % 25) + 1;
            q=temp;
        }else{
            q--;
        }
    }
    return num;
}