#include <stdio.h>
void main()
{
    int a[10][10], b[10][10];
    int temp, i, j, n;
    printf("enter array size: ");
    scanf("%d", &n);
    printf("enter array ele: ");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
        printf("\n");
    }
    printf("printing array...\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            printf("%d", a[i][j]);
        printf("\n");
    }
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] != a[j])
            {
                temp = a[i][j];
                a[i][j] = a[j][i];
                a[j][i] = temp;
            }
        }
    }
    printf("\nafter transpose...\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            printf("%d", a[i][j]);
        printf("\n");
    }
}