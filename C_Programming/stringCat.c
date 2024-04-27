#include "string.h"

void stringCat(char *des, char *src)
{
    int desLen = strlen(des);
    int l = strlen(src);
    for (int i = 0; i <= l; i++)
    {
        des[desLen] = src[i];
        desLen++;
    }
    printf("%s", des);
}