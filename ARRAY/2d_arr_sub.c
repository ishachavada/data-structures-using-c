#include <stdio.h>
void main()
{
    int a[2][2],b[2][2],c[2][2], sub;
    printf("enter matrix 1: ");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
            scanf("%d", &a[i][j]);
    }
    printf("enter matrix 2: ");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
            scanf("%d", &b[i][j]);
    }
    for (int i = 0; i < 2; i++)
    {   
        sub=0;
        for (int j = 0; j < 2; j++)
        {
            sub=a[i][j]-b[i][j];
            printf("%d ",sub);
        }
        printf("\n");
    }
}