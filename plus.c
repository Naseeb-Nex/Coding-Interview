#include <stdio.h>

int main()
{
    int i, a, b;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter first number: ");
    scanf("%d", &b);
    for (i = 1; i <= b; i++)
    {
        a++;
    }
    printf("%d", a);
}