#include <stdio.h>

int main()
{
    int n, age[100], i, j, temp;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &age[i]);
    }
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (age[j] > age[j + 1])
            {
                temp = age[j];
                age[j] = age[j + 1];
                age[j + 1] = temp;
            }
        }
    }
    if (n % 2 == 0)
    {
        printf("%d %d", age[n / 2 - 1], age[n / 2]);
    }
    else
    {
        printf("%d", age[(n + 1) / 2 - 1]);
    }

    return 0;
}
