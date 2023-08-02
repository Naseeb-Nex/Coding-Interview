// Pattern : ABCDEF
#include <stdio.h>

int main()
{
    int i, j, n;

    // for (i = 1; i <= 10; i++)
    // {
    //     printf("%d X %d = %d\n", i, n, n * i);
    // }


    for (i = 65; i <= 70; i++)
    {
        for (j = 65; j <= i; j++)
        {
            printf("%c  ", j);
        }
    }

    return 0;
}