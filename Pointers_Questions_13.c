#include <stdio.h>
int main()
{
    int a = 25, b;
    int *ptr, *ptr1;
    ptr = &a;
    ptr1 = &b;
    b = 36;
    printf("%d %d", *ptr, *ptr1);
    return 0;
}