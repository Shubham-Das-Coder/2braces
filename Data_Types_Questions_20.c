#include <stdio.h>
int main()
{
    if (sizeof(char) > -12)
        printf("yes");
    else
        printf("No");
    return 0;
}