#include <stdio.h>
#include <locale.h>

/*Программа раскладывает число на множетели внутри массива, позволяя удобно возвращать полученные значения
*Открытие для меня: для возврата значений массива не требуется return. Значения можно вернуть прямо из void.
*Однако для получения ограничителя N нам нужно возвращаемое значение(чтобы в printf не напечатать лишнего)
*
*Программа ограничена сотней делителей. Если, теоретически, будет сверх большое число, то программа может сломаться. 
*Поэтому в идеале количество элементов в массиве должно вычисляться на старте
*/

int get_factorization_number(int x, int arr[])
{
    int top = 0;
    int divisor = 2;
    while (x != 1)
    {
        while (x % divisor == 0)
        {
            arr[top] = divisor;
            top++;
            x /= divisor;
        }
        divisor++;
    }

    return top;
}

int main()
{
	setlocale(LC_ALL, "rus");

    int x;
    printf("Введите число\t");
    scanf("%d", &x);
    printf("\n");

    int N;
    int arr[100];

    N = get_factorization_number(x, arr);
    printf("Простые множители числа %d: ", x);
    for (int i = 0; i < N; i++)
    {
        printf("%d ", arr[i]);

    }
    printf("\n");

    

	return 0;
}