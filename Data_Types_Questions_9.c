#include <stdio.h>
int main()
{
    extern int num;
    num = 5;
    printf("%d", num);
    return 0;
}