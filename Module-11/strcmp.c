#include <stdio.h>
#include <string.h>
int main()
{
    // String comparison (Which string is bigger)
    char a[100], b[100];
    scanf("%s %s", a, b);
    int ans = strcmp(a, b);
    if (ans < 0)
    {
        printf("A is smaller");
    }
    else if (ans > 0)
    {
        printf("B is smaller");
    }
    else
    {
        printf("Same");
    }
    return 0;
}