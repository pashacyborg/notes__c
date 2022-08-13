#include <stdio.h>
#include <locale.h>

/**/

void matryoshka(int N)
{
    if (N == 1)
    {
        printf("Крайняя часть матрешки!(часть %d)\n", N);
    }
    else 
    {
        printf("Матрешка разбирается, часть %d\n", N);
        matryoshka(N-1);
        printf("Матрешка собирается, часть %d\n", N);
    }
}

int main()
{
	setlocale(LC_ALL, "rus");

    matryoshka(5);

	return 0;
}