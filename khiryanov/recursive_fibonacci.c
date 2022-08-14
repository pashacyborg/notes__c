#include <stdio.h>
#include <locale.h>

int Fibonacci(int n)
{
    if (n <= 1)
    {
        return n;  
    }
    return Fibonacci(n-1) + Fibonacci(n-2);
}

int main()
{
	setlocale(LC_ALL, "rus");

    int n;
    printf("Введите номер числа Фибоначи\n");
    scanf("%d", &n);
    
    printf("число Фибоначи(номер %d) равно %d\n", n, Fibonacci(n));

	return 0;
}