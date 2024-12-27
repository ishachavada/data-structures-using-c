#include <stdio.h>
int main()
{
    int *p, n, i, j;
    printf("enter size of array: ");
    scanf("%d", &n);
    printf("enter array elements: \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            scanf("%d", (p + i * n + j));
        printf("\n");
    }
    printf("array elements are: \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            printf("%d\t", *(p + i * n + j));
        printf("\n");
    }
}