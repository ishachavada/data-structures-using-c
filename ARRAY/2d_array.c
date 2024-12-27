#include <stdio.h>
void main()
{
    int a[3][3], temp;
    printf("enter the matrix: ");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            scanf("%d", &a[i][j]);
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            // temp = a[i][j];
            // a[i][j] = a[j][i];
            // a[j][i] = temp;
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }
}