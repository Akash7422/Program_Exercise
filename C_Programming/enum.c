#include "stdio.h"

int main(){
    //Creting enum by object name days
    enum days {mon, tue, wed, thu, fri, sat, sun};
    enum days d1=mon, d2=tue;
    printf("%d",d1);
    return 0;
}
