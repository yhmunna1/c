
// Has No Return + Parameter (Find Maximum value)

#include <stdio.h>

int sum(int ar[], int n)
{
    int max = ar[0];
    for (int i = 0; i < n; i++)
    {
        if (ar[i] > max)
        {
            max = ar[i];
        }
    }
    printf("%d ", max);
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
    sum(ar, n);
    return 0;
}