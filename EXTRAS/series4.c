#include <stdio.h>
#include <math.h>
void main()
{
    int n, x;
    double p;
    int sum = 0;
    printf("enter the value of n: ");
    scanf("%d", &n);
    printf("enter the value of x: ");
    scanf("%d", &x);
    for (int i = 1; i <= n; i++)
    {

        p = pow(x, i);
        if (i == 1)
        {
            printf("%d ", x);
            p = p;
            sum = sum + p;
        }

        else if (i % 2 != 0)
        {
            printf("+%d^%d ", x, i);
            p = +p;
            sum = sum + p;
        }
        else if (i % 2 == 0)
        {
            printf("-%d^%d ", x, i);
            p = -p;
            sum = sum + p;
        }
    }
    printf("\nsum: %d", sum);
}
