#include <stdio.h>
#include <locale.h>

/*Количество итераций при сдвиге должно быть на 1 меньше, чем количество элементов в массиве i < N-1.
*Т.к. "состыковок" между элементами в массиве на один меньше - количество "пар". 
*Для алгоритма циклического сдвига последовательность действий играет решающее значение
*/

#define N 10

void print(int arr[])
{
    for (int i = 0; i < N; i++)
    {
        printf("%3d", arr[i]);
    }
    printf("\n\n");
    
}

int main()
{
	setlocale(LC_ALL, "rus");
    int arr[N] = {0, 10, 20, 30, 40, 50, 60, 70, 80, 90};
    print(arr);

    int tmp = arr[0];
    for (int i = 0; i < N-1; i++)
    {
        arr[i] = arr[i+1];           //shift left
    }
    arr[N-1] = tmp;

    // int tmp = arr[N-1];
    // for (int i = 0; i < N-1; i++)
    // {
    //     arr[N-1-i] = arr[N-2-i];     //shift rigth
    // }
    // arr[0] = tmp;
    
    print(arr);

	return 0;
}