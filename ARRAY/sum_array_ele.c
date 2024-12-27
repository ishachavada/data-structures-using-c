#include <stdio.h>
void main()
{
    int A[5] = {1, 2, 3, 4, 5};
    int sum = 0;
    printf("sum of all array elements: ");
    for (int i = 0; i < 5; i++)
    {
        sum = sum + A[i];
    }

    printf("%d", sum);
}