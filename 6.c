#include <stdio.h>

int main()
{
    int n, x, a = 0;

    printf("Enter a number ");
    scanf("%d", &n);

    x = n;

    while (n >= a)
    {
        x = x * (n = (n - 1));
        a++;
    }

    printf("Factorial of a number is: %d", x);
    return 0;
}