#include <stdio.h>
int main()
{
    char *ptr = "2braces.com";
    printf("%c\n", *&*ptr);
    return 0;
}