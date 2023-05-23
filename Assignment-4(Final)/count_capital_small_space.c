#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000];
    int i, len, space = 0, upper = 0, lower = 0;
    fgets(str, sizeof(str), stdin);
    len = strlen(str);

    for (i = 0; i < len; i++)
    {
        if (str[i] == ' ')
        {
            space++;
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            upper++;
        }
        else if (str[i] >= 'a' && str[i] <= 'z')
        {
            lower++;
        }
    }

    printf("Capital - %d\n", upper);
    printf("Small - %d\n", lower);
    printf("Spaces - %d\n", space);

    return 0;
}
