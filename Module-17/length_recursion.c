#include <stdio.h>

int fun(char a[], int i)
{
    if (a[i] == '\0')
        return;
    int l = fun(a, i + 1);
    return l + 1;
}

int main()
{
    char a[6] = "hello";
    int len = fun(a, 0);
    printf("%d", len);
    return 0;
}