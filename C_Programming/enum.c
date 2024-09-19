#include "stdio.h"

int main()
{
    // check pull request
    enum days
    {
        mon,
        tue,
        wed,
        thu,
        fri,
        sat,
        sun
    };
    enum days d1 = mon, d2 = tue;
    // check for merge conflict
    printf("%d", d1);
    return 0;
}
