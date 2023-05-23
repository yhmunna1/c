#include <stdio.h>
int main()
{
    int tk;
    scanf("%d", &tk);
    if (tk >= 5000)
    {
        if (tk >= 10000)
        {
            printf("Cox & Sajek Jabo");
        }
        else
        {
            printf("Sudhu Cox ghurbo");
        }
    }
    else
    {
        printf("Jabo na");
    }
    return 0;
}