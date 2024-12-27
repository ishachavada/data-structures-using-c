#include <stdio.h>
#include <string.h>
isPalindrom(char str[])
{
    int s = 0, e = strlen(str) - 1;
    while (s < e)
    {
        if (str[s] != str[e])
            return 0;
        s++;
        e--;
    }
    return 1;
}

void main()
{
    char str[100];
    printf("enter string: ");
    gets(str);
    if (isPalindrom(str))
        printf("Palindrom");
    else
        printf("not palindrom");
}