#include <stdio.h>
void main()
{

    int n, a;
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
    for (int i = 0; i < 5; i++)
    {
        if (A[i] % 7 == 0)
        {
            a++;
        }
    }
    printf("\nno of elements div by seven are: %d", a);
}