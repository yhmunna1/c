#include <stdio.h>

int main()
{
    // System 1
    // char a[5] = {'M', 'u', 'n', 'n', 'a'};
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("%c\n", a[i]);
    // }

    // System-2
    char a[6] = "Munna";
    printf("%s\n", a);

    // Find array size:
    char b[7] = "Yeasin";
    int size = sizeof(b) / sizeof(char);
    printf("%d", size);

        return 0;
}