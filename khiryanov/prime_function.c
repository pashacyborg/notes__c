#include <stdio.h>
#include <stdbool.h>

bool IsPrime(int x);

int main()
{
    int x;
    // bool is_prime = true;
    printf("Write the number:\n");
    scanf("%d", &x);

    if (IsPrime(x))
        printf("The number %d is prime :)\n", x);
    else
        printf("The number %d is not prime!!!", x);

    return 0;
}

bool IsPrime(int x)
{
    if (x == 1 || x <= 0)
        return false;

    for (int division = 2; division*division <= x; division++)
    {
        if (x % division == 0)
        {
            return false;
        }
    }
    return true;
}
