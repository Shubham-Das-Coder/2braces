#include <stdio.h>
int main()
{
    static int num = 6;
    printf("%d ", num--);
    if (num)
        main();
    return 0;
}