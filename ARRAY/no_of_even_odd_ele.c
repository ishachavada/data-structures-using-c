#include <stdio.h>
void main()
{
    int a = 0, b = 0;
    int A[5];
    printf("enter array elements: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &A[i]);
    }
    printf("\narray elements: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", A[i]);
        if (i % 2 == 0)
        {
            a++;
        }
        else
        {
            b++;
        }
    }

    printf("\nno. of even no: %d", a);

    printf("\nno. of odd no: %d", b);
}