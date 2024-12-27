#include <stdio.h>
void main()
{

    int colsize, rowsize, a[10][10], sum;
    printf("enter row amd col size: ");
    scanf("%d %d", &rowsize, &colsize);

    printf("\nEnter the elements: ");
    for (int i = 0; i < rowsize; i++)
    {
        for (int j = 0; j < colsize; j++)
        {

            scanf("%d", &a[i][j]);
        }
    }

    printf("\nArray elements: \n");
    for (int i = 0; i < rowsize; i++)
    {
        for (int j = 0; j < colsize; j++)
            printf("%d", a[i][j]);

        printf("\n");
    }
    printf("\nsum of diagonal elements...\n");

    for (int i = 0; i < rowsize; i++)
    {

        for (int j = 0; j < colsize; j++)
        {
            if (i == j)
                sum = sum + a[i][j];
        }
    }

    printf("%d\n", sum);
    printf("\nSum of each row...\n");

    for (int i = 0; i < rowsize; i++)
    {
        sum = 0;
        for (int j = 0; j < colsize; j++)
        {
            sum = sum + a[i][j];
        }

        printf("%d\n", sum);
    }

    printf("\nsum of each column...\n");

    for (int i = 0; i < rowsize; i++)
    {
        sum = 0;
        for (int j = 0; j < colsize; j++)
        {
            sum = sum + a[j][i];
        }

        printf("%d\t", sum);
    }
}