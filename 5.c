#include <stdio.h>

int main()
{
    int n, sum = 0, x = 1;

    printf("Enter the nubmer ");
    scanf("%d", &n);

    while (x <= n)
    {
        sum += x * x * x;
        x++;
    }

    printf("The of cubes is: %d", sum);

    return 0;
}