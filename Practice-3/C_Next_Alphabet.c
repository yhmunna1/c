#include <stdio.h>

int main()
{
    char a;
    scanf("%c", &a);
    if (a == 'z')
    {
        printf("a\n");
    }
    else
    {
        int next = a + 1;
        printf("%c", next);
    }
    return 0;
}