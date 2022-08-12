#include <stdio.h>
#include <locale.h>

/*Сортировка вставками*/

#define ALLOCATED_SIZE 100


int InputArray(int arr[], int max_size)
{
    int top = 0;
    printf("Введите массив:\n");
    while (top != max_size)
    {
        int x;
        scanf("%d", &x);
        if (x == 0 || top == max_size)
            break;
        arr[top] = x;
        top++;
    }

    return top;
}

void PrintArray(int arr[], int N)
{
    for (int i = 0; i < N; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");   
}

void InsertSort(int arr[], int N)
{
    for (int i = 1; i < N; i++)
    {
        int k = i;
        while (k > 0 && arr[k-1] > arr[k])
        {
            int tmp = arr[k-1];
            arr[k-1] = arr[k];
            arr[k] = tmp;
            k--;
        }
    
    }
    
}

int main()
{
	setlocale(LC_ALL, "rus");

    int arr[ALLOCATED_SIZE];
    int N;

    N = InputArray(arr, ALLOCATED_SIZE);
    printf("array before sorting\n");
    PrintArray(arr, N);
    InsertSort(arr, N);
    printf("array after sorting\n");
    PrintArray(arr, N);

	return 0;
}