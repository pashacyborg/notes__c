#include <stdio.h>
#include <locale.h>

/**/

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
    // int arr1[N] = {0, 10, 20, 30, 40, 50, 60, 70, 80, 90};
    // int arr2[N] = {0};
    // print(arr1);
    // print(arr2);

    // for (int i = 0; i < N; i++)
    // {
    //     arr2[i] = arr1[N-1-i];       //case1
    // }

    // print(arr1);
    // print(arr2);

    int arr3[N] = {0, 10, 20, 30, 40, 50, 60, 70, 80, 90};
    print(arr3);

    for (int i = 0; i < N/2; i++)
    {
        int tmp = arr3[i];
        arr3[i] = arr3[N-1-i];              //case 2
        arr3[N-1-i] = tmp;
    }
    print(arr3);

	return 0;
}