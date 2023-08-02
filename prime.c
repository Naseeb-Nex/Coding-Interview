#include <stdio.h>

int main()
{
    int flag = 0, i, j;
    for (j = 50; j <= 100; j++)
    {
        flag = 0;
        for (i = 2; i < j / 2; i++)
        {
            if (j % i == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag != 1)
            printf("%d\n", j);
    }
    return 0;
}