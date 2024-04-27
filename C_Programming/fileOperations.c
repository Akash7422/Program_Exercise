#include "stdio.h"
#include "stdlib.h"
void writeFile()
{
    FILE *fp;
    char ch;
    fp = fopen("file.txt", "w");
    if (fp == NULL)
    {
        printf("File does not exist\n");
        exit(1);
    }
    else
    {
        fputs("sdhsdcuh", fp);
        fclose(fp);
    }
}

void readFile()
{
    FILE *fp;
    char ch;
    char str[50];
    fp = fopen("file.txt", "r");
    if (fp == NULL)
    {
        printf("File does not exist\n");
        exit(1);
    }
    else
    {
        // fgets(str,5,fp);
        // printf("%s",str);
        while (!feof(fp))
        {
             fgets(str,5,fp);
             printf("%s",str);
            //ch = fgetc(fp);
            //printf("%c", ch);
        }
        fclose(fp);
    }
}

int main()
{
    // writeFile();
    readFile();

    return 0;
}
