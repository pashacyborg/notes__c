#include <stdio.h>
#include <locale.h>

/**/

#define N 6

int main()
{
	setlocale(LC_ALL, "rus");
    int arr[N] = {0};

    for (int i = 0; i < N/2; i++)
    {
        arr[2*i] = i;
        arr[2*i + 1] = N/2 + i;
    }

    for (int i = 0; i < N; i++)
    {
        printf("%d  ", arr[i]);
    }
    printf("\n");

	return 0;
}