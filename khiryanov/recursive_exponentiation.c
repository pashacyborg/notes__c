#include <stdio.h>
#include <locale.h>

int Exponentiation(int a, int n)
{
    if (n == 0)
    {
        return 1;
    }

    if (n % 2 == 1)     //Для нечетных степеней
    {
        return a * Exponentiation(a, n-1);
    }
    else        //Для четных(так быстрее)
    {
        return Exponentiation(a*a, n/2);
    }
}

int main()
{
	setlocale(LC_ALL, "rus");

    int a, n;
    printf("Введите число и его степень\n");
    scanf("%d%d", &a, &n);
    
    printf("число %d в степени %d равно: %d\n", a, n, Exponentiation(a, n));

	return 0;
}