#include <stdio.h>
#include <locale.h>

/*Программа ищет наименьший общий делитель*/

int Gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    
    return Gcd(b, a%b);
}

int main()
{
	setlocale(LC_ALL, "rus");

    int a, b;
    printf("Введите число\n");
    scanf("%d%d", &a, &b);
    
    printf("Наименьший общий делитель чисел %d и %d равен: %d\n", a, b, Gcd(a, b));

	return 0;
}