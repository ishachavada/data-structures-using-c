#include <stdio.h>
void main()
{
    int A[5] = {1, 2, 3, 4, 5};
    int m=1;
    printf("mul of all array elements: ");
    for (int i = 0; i < 5; i++)
    {
        m = m * A[i];
    }

    printf("%d", m);
}