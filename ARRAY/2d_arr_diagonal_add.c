#include <stdio.h>
void main()
{
    int a[3][3], sum = 0, i, j;
    printf("enter matrix: ");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            scanf("%d", &a[i][j]);
        printf("\n");
    }

    // printf("diagonal sum: ");
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         if (i == j)
    //         {
    //             sum = sum + a[i][j];
    //         }
    //     }
    // }

    // printf("%d ", sum);

    printf("column sum: ");
    for (i = 0; i < 3; i++)
    {
        j = 0;
        {

            sum = sum + a[i][j];
            j++;
        }

        printf("%d\n", sum);
    }
}