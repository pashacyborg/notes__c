#include <stdio.h>
#include <locale.h>

/*Эта программа находит наибольшее из введенных значений, порядковый номер этого значения.
*Программа запоминает первую позицию максимального значения среди нескольких таких значений, так же считает их кол-во
*/

int main()
{
	setlocale(LC_ALL, "rus");

    int x;
    int max_n = 0;
    int max_c = 0;
    int i = 0;

    printf("Введите числовую последовательность\n");
    scanf("%d", &x);
    int max = x;
    while (x != 0)
    {
        i++;
        if (x == max)
        {
            max_c++;
        }
        if (x > max)
        {
            max = x;
            max_n = i;
            max_c = 1;
        }
        scanf("%d", &x);

    }
    printf("Максимальное число стоит на %d месте и равняется %d\n"
           "Количество максимумов: %d\n", max_n, max, max_c);
    

	return 0;
}