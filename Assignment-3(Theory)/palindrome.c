#include <stdio.h>
#include <string.h>

int is_palindrome(char str[])
{
    int i;
    int len = strlen(str);

    for (int i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - 1 - i])
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
    char str[100];
    int result;
    scanf("%s", str);

    result = is_palindrome(str);

    if (result == 1)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not Palindrome\n");
    }

    return 0;
}
