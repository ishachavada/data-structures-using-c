#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *p, n, i;
    int even = 0, odd = 0;
    printf("enter size of array: ");
    scanf("%d", &n);

    p = (int *)malloc(sizeof(int) * n);
    printf("enter array elements: \n");
    for (i = 0; i < n; i++)

        scanf("%d", (p + i));

    printf("array elements are: \n");
    for (i = 0; i < n; i++)
        printf("%d\t", *(p + i));
    printf("\n");

    for (i = 0; i < n; i++)
    {
        if (*(p + i) % 2 == 0)
            even++;
        else
            odd++;
    }
    printf("\neven elements: %d\nodd elements:%d\n", even, odd);
}