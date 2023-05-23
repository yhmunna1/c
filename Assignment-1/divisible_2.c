#include <stdio.h>

int main()
{
    int i, n;
    scanf("%d", &n);

    int num = 0;
    for (i = 1; i <= n; i++)
    {
        if (i % 3 == 0 && i % 7 == 0)
        {
            if (num)
            {
                printf("\n");
            }
            printf("%d", i);
            num = 1;
        }
    }

    return 0;
}