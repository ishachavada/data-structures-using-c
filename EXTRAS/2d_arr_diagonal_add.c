#include <stdio.h>
void main()
{
    int a[3][3], sum = 0;
    printf("enter matrix: ");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            scanf("%d", &a[i][j]);
    }

    printf("diagonal sum: ");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == j)
            {
                sum = sum + a[i][j];
            }
        }

    }
    
        printf("%d ", sum);
}