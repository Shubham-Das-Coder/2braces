#include <stdio.h>
int main()
{
    int num = 10;
    printf("num = %d addresss of num = %u", num, &num);
    num++;
    printf("\n num = %d addresss of num = %u", num, &num);
    return 0;
}