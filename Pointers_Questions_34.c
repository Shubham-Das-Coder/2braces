#include <stdio.h>
int main()
{
    char *str = "His";
    int i;
    for (i = 0; i < strlen(str); i++)
        printf("%s", str++);
    return 0;
}