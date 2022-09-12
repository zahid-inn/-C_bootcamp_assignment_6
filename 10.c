#include <stdio.h>

int main()
{
    int n, x, num = 0;

    printf("Enter a number \n");
    scanf("%d", &n);

    while (n!=0)
    {
        x = n % 10;
        n /= 10;
        num = num * 10 + x;
    }

    printf("Reversed number is: %d", num);

    return 0;
}