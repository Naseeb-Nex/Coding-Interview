#include <stdio.h>

int main()
{
    int n, i = 0;
    printf("Enter a digit: ");
    scanf("%d", &n);

    while (n != 0)
    {
        i = i + n % 10;
        n = n / 10;
    }
    printf("Sum of digits: %d", i);
}