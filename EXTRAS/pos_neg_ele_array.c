#include <stdio.h>
void main()
{
    int A[5];
    int i, c1 = 0, c2 = 0;
    printf("enter array elements: ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &A[i]);
    }
    printf("array elements: ");
    for (i = 0; i < 5; i++)
    {
        printf("%d\t", A[i]);
    }
    for (i = 0; i < 5; i++)
    {
        if (A[i] > 0)
        {
            c1++;
        }
        else if (A[i] < 0)
        {
            c2++;
        }
    }

    printf("\npostive values: %d", c1);

    printf("\nnegative values: %d", c2);
}