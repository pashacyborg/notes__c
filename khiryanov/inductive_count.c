#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "rus");
    int amount = 0;
    int x;
    printf("Введите число, программа посчитает количество его цифр\n");
    scanf("%d", &x);
    int sign = (x < 0)? -1 : +1;

    if (x == 0)
        amount = 1;

    while (sign*x != 0)
    {
        amount++;
        x /= 10;
    }
    printf("result = %d\n", amount);

    return 0;
}