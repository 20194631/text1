#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 9;
    sizeof(++i);
    printf("%d",sizeof(++i));
    return 0;
}
