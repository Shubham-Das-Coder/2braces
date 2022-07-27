#include <stdio.h>
int main()
{
    int size = sizeof(volatile) + sizeof(const);
    printf("%d", ++size);
    return 0;
}