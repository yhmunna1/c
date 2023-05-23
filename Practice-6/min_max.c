#include <stdio.h>

int fun(int ar[], int n)
{
    int min = ar[0];
    int max = ar[0];

    for (int i = 0; i < n; i++)
    {
        if (ar[i] < min)
        {
            min = ar[i];
        }
        if (ar[i] > max)
        {
            max = ar[i];
        }
    }
    printf("%d ", min);
    printf("%d", max);
}

int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d ", &ar[i]);
    }
    fun(ar, n);

    return 0;
}