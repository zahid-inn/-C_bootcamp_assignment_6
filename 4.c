#include <stdio.h>

int main()
{
    int n, x = 1, sum = 0;

    printf("Enter a number ");
    scanf("%d", &n);

    while (x <= n)
    {
        sum += x * x;
        x++;
    }

    printf("\nThe sum of squares of 1st %d numbers is: %d", n, sum);

    return 0;
}