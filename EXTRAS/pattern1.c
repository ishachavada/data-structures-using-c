#include <stdio.h>
void main()
{
    int n;
    char c='a';
    printf("enter the number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int k = i; k < n; k++)
            printf(" ");
        for (int l = 1; l <= i; l++)
            printf("%c", c++);
        printf("\n");
    }
}