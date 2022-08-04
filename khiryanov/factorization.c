#include <stdio.h>
#include <locale.h>

/*Программа раскладывает число на простые множетели*/

void PrintFactorization(int x)
{
    int divisor = 2;
    while (x != 1)
    {
        while (x % divisor == 0)
        {
            printf("%d ", divisor);
            x /= divisor;
        }
        divisor++;
    }
    printf("\n");
}

int main()
{
    setlocale(LC_ALL, "rus");
    printf("enter the number\n");
    int x;
    scanf("%d", &x);
    printf("\n");
    if (x <= 1)
    {
        printf("entered number is incorrect, try again..\n");
        return 0;
    }

    PrintFactorization(x);

    return 0;
}