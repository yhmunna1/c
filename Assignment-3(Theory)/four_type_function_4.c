
// Has No Return + No Parameter (Find Minimum value)

#include <stdio.h>

int sum()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &ar[i]);
    }
    int min = ar[0];
    for (int i = 0; i < n; i++)
    {
        if (ar[i] < min)
        {
            min = ar[i];
        }
    }
    printf("%d ", min);
}

int main()
{
    sum();
    return 0;
}