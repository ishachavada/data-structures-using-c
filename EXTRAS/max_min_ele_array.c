#include <stdio.h>
void main()
{

    int a, b;
    int A[5];
    printf("enter array elements: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &A[i]);
    }
    printf("array elements: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", A[i]);
    }
    a = A[0];
    b = A[0];
    for (int i = 0; i < 5; i++)
    {
        if (A[i] > a)
            a = A[i];
        else if (A[i] < b)
            b = A[i];
    }
    printf("\nlargest element in the array: %d", a);

    printf("\nsmallest element in the array: %d", b);
}