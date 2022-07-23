#include <stdio.h>
int main()
{
    char *ptr;
    printf("%d %d", sizeof(*ptr), sizeof(ptr));
    return 0;
}