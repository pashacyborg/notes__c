#include <stdio.h>

int main()
{
    int x = 2056;
    while (x != 0)
    {
        printf("%d %d\n", x/10, x%10);
        x /= 10;
    }
    return 0;
}