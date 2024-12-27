#include <stdio.h>
#include <stdlib.h>

void main()
{
    int *p, *q, *r, n, i, j, sum = 0, temp;
    printf("enter size of array: ");
    scanf("%d", &n);
    p = (int *)malloc(sizeof(int) * n * n);
    q = (int *)malloc(sizeof(int) * n * n);
    r = (int *)malloc(sizeof(int) * n * n);
    printf("enter matrix 1: \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            scanf("%d", (p + i * n + j));
        printf("\n");
    }
    printf("enter matrix 2: \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            scanf("%d", (q + i * n + j));
        printf("\n");
    }
    //    printf("array elements are: \n");
    //    for (i = 0; i < n; i++)
    //    {
    //        for (j = 0; j < n; j++)
    //            printf("%d\t", *(p + i * n + j));
    //        printf("\n");
    //    }
    printf("\nAddition: \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            *(r + i * n + j) = (*(p + i * n + j)) + (*(q + i * n + j));

            printf("%d\t", *(r + i * n + j));
        }
        printf("\n");
    }
    printf("\ntranspose: \n");
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (i != j){
                temp = *(p + i * n + j);
            *(p + i * n + j) = *(p + j * n + i);
            *(p + j * n + i) = temp;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            printf("%d\t", *(p + i * n + j));
        printf("\n");
    }
}