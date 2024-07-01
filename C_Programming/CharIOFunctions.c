#include "stdio.h"

int main()
{
int ch=0;
// while((ch=getchar())!=EOF)
// printf("%c",ch);
ch=getc(stdin);
printf("%c",ch);

return 0;
}