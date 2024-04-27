#include "stdio.h"
#include "string.h"

void convertToUpper(char *str)
{
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;
    }
    printf("Upper case string is : %s \n", str);
}

void convertToLower(char *str)
{
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;
    }
    printf("Lower case string is : %s \n", str);
}