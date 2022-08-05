#include <stdio.h>
#include <locale.h>

/**/

int main()
{
	setlocale(LC_ALL, "rus");
    int x;
    int mod;
    int production = 1;


	printf("Введите двузначное число > 0, программа посчитает произведение его цифр\n");
    scanf("%d", &x);

    if (x <= 9)
	{
		printf("Введите корректное число\n");
		return 0;
	}

	while (x)
	{
		mod = x % 10;
        production *= mod;
        x /= 10;
	}

	printf("result = %d\n", production);

	return 0;
}