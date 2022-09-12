#include <stdio.h>

int main()
{
    int n, sum = 0, x = 1;

    printf("Enter a number ");
    scanf("%d", &n);

    while (x <= n)
    {
        sum = sum + x;
        x++;
    }

    printf("Sum of numbers is: %d ", sum);

    return 0;
}