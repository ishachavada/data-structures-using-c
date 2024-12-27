#include <stdio.h>
void main()
{
    int n,i;
    printf("enter the value of n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int k = i; k < n; k++)
            printf(" ");
        for (int j = 1; j <= i; j++)
            printf("*");
        for (int l = 1; l < i; l++)
            printf("*");

        printf("\n");
    }
    for (int i = (n-1); i>=1; i--)
    {
        for (int k = i; k < n; k++)
            printf(" ");
        for (int j = 1; j <= i; j++)
            printf("*");
        for (int l = 1; l < i; l++)
            printf("*");

        printf("\n");
    }
}
