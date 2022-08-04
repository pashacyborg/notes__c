/*Генерация арифметической прогрессии
*/

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "rus");
	printf("write start, end, step\n");
	int start, end, step;
	scanf("%d%d%d", &start, &end, &step);
	int index = (step > 0)? +1 : -1;
	int x = start;
	
	while(index*x < index*end)
	{
		printf("x = %d\n", x);
		x += step;
	}
	printf("value x after cycle = %d\n", x);
	return 0;
}