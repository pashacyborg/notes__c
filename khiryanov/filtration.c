#include <stdio.h>
#include <locale.h>

/*Программа фильтрует числовую последовательность и печатает только нечетные числа. 
*Чтобы программа печатала четные числа, надо изменить mod % 2 == 1 на 0
*/

int main()
{
	int x;
	int num = 0;
	printf("Введите число\n");
	scanf("%d", &x);

	int mod;
	while (x)
	{
		mod = x % 10;
		if (mod % 2 == 1)
			printf("Нечетное число №%d: %d\n", ++num, mod);
		x /= 10;
	}
	return 0;
}
