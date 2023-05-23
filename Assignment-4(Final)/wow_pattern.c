#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        // print leading spaces
        for (int j = 0; j < n - i; j++)
        {
            printf(" ");
        }
        // print arrows
        for (int j = 0; j < 2 * i - 1; j++)
        {
            if (i % 2 == 0)
            {
                printf("*");
            }
            else
            {
                printf("^");
            }
        }
        printf("\n");
    }

    return 0;
}
