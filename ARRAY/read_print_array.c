#include <stdio.h>
void main()
{
    int a[10][10];
    char c[20];
    int x, y, z;
    printf("enter rows: ");
    scanf("%d", &x);
    printf("enter rows: ");
    scanf("%d", &y);
    printf("enter integer array elements: ");
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
            scanf("%d", &a[i][j]);
    }
    printf("printing integer array elements... \n");
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
            printf("%d\t", a[i][j]);
        printf("\n");
    }
    printf("enter char array size: ");
    scanf("%d", &z);
    printf("enter char array elements: ");
    for (int i = 0; i < z; i++)
    {
        scanf("%s", &c[i]);
    }
    for (int i = 0; i < z; i++)
    {
        printf("%s", c[i]);
    }
}