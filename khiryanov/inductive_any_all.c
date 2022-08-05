#include <stdio.h>
#include <locale.h>
#include <stdbool.h>
/**/

int main()
{
	setlocale(LC_ALL, "rus");
    bool any = false;
    bool all = true;
    int mod;
    int number;
    printf("Введите число. any выдаст true, если хотя бы одна цифра < 5," 
           " all выдаст true только в том случае, если все цифры < 5\n");
    int value;
    scanf("%d", &number);
    value = number;
    printf("value = %d\n", value);

    if (number <= 0)
	{
		printf("Введите корректное число\n");
		return 0;
	}

    // while (number)
    // {
    //     mod = number % 10;
    //     any = any || (mod < 5);      case1
    //     all = all && (mod < 5);
    //     number /= 10;
    // }


//                                      case2
    while (number)
    {
        mod = number % 10;
        if (mod < 5)
        {
            any = true;
            break;
        }
        number /= 10;
    }
    printf("any = %d\n", any);


    number = value;
    mod = 0;
    while (number)
    {
        mod = number % 10;
        if (mod >= 5)
        {
            all = false;
            break;
        }
        number /= 10;
    }
    printf("all = %d\n", all);

    // printf("any = %d\nall = %d\n", any, all);        case1

	return 0;
}
