#include <stdio.h>
#include <string.h>
int main()
{
    char str[1001];
    scanf("%s", str);
    int vowels = 0;

    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            vowels++;
        }
    }
    printf("%d", vowels);

    return 0;
}