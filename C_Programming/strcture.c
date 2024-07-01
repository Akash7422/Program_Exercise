#include <stdio.h>
#include "malloc.h"
#include "string.h"
typedef struct Strcture
{

    int rolNo;

    char name[10];
    char X;
    int rolN2o;

} strcture;

int main()
{
    // strcture *ptr = (strcture *)malloc(sizeof(strcture));
    //  if (ptr == NULL)
    //  {
    //      printf("Memory allocation failed.\n");
    //      return 1; // Exit program with error code
    //  }
    //  ptr->rolN2o = 10;
    //  printf("%d", ptr->rolN2o);
    typedef strcture *ptr;
    ptr head = (strcture *)malloc(sizeof(strcture));
    ptr tail = (strcture *)malloc(sizeof(strcture));
    head->name;
    tail->name;
    printf("%u",head);
    printf("%u",tail);
    free(head);
    free(tail);
    return 0;
}