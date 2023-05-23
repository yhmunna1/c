#include <stdio.h>

int main()
{
    int n, a, b, tiger = 0, pathan = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &a, &b);

        if (a > b)
        {
            tiger++;
        }
        else if (b > a)
        {
            pathan++;
        }
    }

    if (tiger > pathan)
    {
        printf("Tiger\n");
    }
    else if (pathan > tiger)
    {
        printf("Pathan\n");
    }
    else
    {
        printf("Draw\n");
    }

    return 0;
}
