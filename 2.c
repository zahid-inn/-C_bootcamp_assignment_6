#include <stdio.h>

int main()
{
    int n, x = 2, sum = 0;

    printf("Enter the number\n");
    scanf("%d", &n);

    while (x <= n)
    {
        sum += x;
        x += 2;
    }

    printf("The sum of first %d even numbers is: %d", n, sum);
    return 0;
}