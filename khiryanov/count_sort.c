#include <stdio.h>
#include <locale.h>

/*Сортировка подсчетом. Ее применение весьма ограничено: каждая ячейка массива - это счетчик. Если у нас
*чисел мало(10, к примеру) - такая сортировка очень хороша по скорости. Если чисел миллион - не актуально, т.к.
*мы не будем создавать тысячу счетчиков*/

int main()
{
	setlocale(LC_ALL, "rus");

    int counters[10] = {0};
    int x;

    printf("Введите массив чисел\n");
    while (x != 10)
    {
        scanf("%3d", &x);
        if (x == 10) break;
        if (x < 0 || x > 9) continue;
        counters[x]++;
    }

    for (x = 0; x < 10; x++)
    {
        for (int i = 0; i < counters[x]; i++)
        {
            printf("%3d", x);
        }
        
    }
    printf("\n");
    

	return 0;
}