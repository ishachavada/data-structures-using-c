#include <stdio.h>
#include <string.h>
void main()
{
    char a[20];
    int n;
    printf("enter size of string: ");
    scanf("%d", &n);

    printf("enter a string: ");
    scanf("%s", a);
    printf("%s\n", a);
    n = strlen(a);

    for (int i = 0; i < n; i++)
    {
        if (a[i] != a[n - i - 1])
        {
            printf("not palindrome");
            break;
        }
        else
        {
            printf("palindrome");
            break;
        }
    }
}