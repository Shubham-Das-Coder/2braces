#include <stdio.h>
#include <string.h>
int main()
{
    register a = 1;
    int far *ptr;
    ptr = &a;
    printf("%u", ptr);
    return 0;
}