#include <stdio.h>
#include <locale.h>

/**/

#define N 100

int main()
{
	setlocale(LC_ALL, "rus");
    int arr[N] = {0};
    for (int i = 2; i*i < N; i++)
    {
        if (arr[i] == 0)        //чтобы не попался мусор(как я понял)
        {
            for (int k = i*i; k < N; k += i)
            {
                arr[k] = 1;
            }
        }
    }

    // for (int i = 0; i < N; i++)
    // {
    //     printf("%3d", i);
    // }
    // printf("\n");
    // for (int i = 0; i < N; i++)
    // {
    //     printf("%3d", arr[i]);
    // }

    printf("prime numbers:\n");
    for (int i = 2; i < N; i++)
    {
        if (arr[i] == 0)
          printf("%3d", i);
    }
    printf("\n");
	return 0;
}