#include <stdio.h>
#include <locale.h>

/**/

int main()
{
	setlocale(LC_ALL, "rus");
	int x;
	int mod;
	int sum = 0;
	printf("Введите число > 0, программа посчитает сумму его цифр\n");
    scanf("%d", &x);

	if (x <= 0)
	{
		printf("Введите корректное число\n");
		return 0;
	}

	while (x)
	{
		mod = x % 10;
		sum += mod;
		x /= 10;
	}

	printf("result = %d\n", sum);

	return 0;
}
