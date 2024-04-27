#include "string.h"

void stringCmp(char *des, char *src){
    int flag=0;
    int desLen=strlen(des);
    int srcLen=strlen(src);
   int maxLen = (desLen > srcLen) ? desLen : srcLen;
    if (desLen!=srcLen){
         flag=1;
    }else{
    for (int i=0;des[i]!='\0'&& src[i]!='\0' ;i++){
        printf("%c %c\n",des[i],src[i]);
        if(des[i]!=src[i]){
            flag=1;
            break;
        } 
    }
    }
if (flag==1){
            printf("not same");
        }else
        {
            printf("same");
        }

}