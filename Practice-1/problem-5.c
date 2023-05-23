#include <stdio.h>
int main()
{
    int tk;
    scanf("%d", &tk);
    if (tk >= 5000)
    {
        if (tk > 20000)
        {
            printf("Gucci Bag\nGucci Belt");
        }
        else if (tk >= 10000)
        {
            printf("Gucci Bag");
        }
        else
        {
            printf("Levis Bag");
        }
    }
    else
    {
        printf("New Market");
    }
    return 0;
}