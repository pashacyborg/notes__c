#include <stdio.h>
#include <locale.h>

/**/

int Factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    
    return n * Factorial(n - 1);
}

int main()
{
	setlocale(LC_ALL, "rus");

    int n;
    printf("Введите число\n");
    scanf("%d", &n);
    
    printf("Факториал %d равен %d\n", n, Factorial(n));

	return 0;
}