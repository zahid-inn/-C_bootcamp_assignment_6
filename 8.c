#include <stdio.h>

int main()
{
    int n, x = 2;

    printf("Enter a number \n");
    scanf("%d", &n);

    while (x < n)
    {
        if (n % x == 0)
        {
            printf("It is not a prime number");
            break;
        }
        x++;
    }
    if (x != 2 || n == 2)
    {
        printf("It is a prime number");
    }

    return 0;
}