#include <stdio.h>
#include <math.h>
void main()
{
    int n, x, fact = 1;
    double sum = 0;
    double p, a;
    printf("enter the value of n: ");
    scanf("%d", &n);
    printf("enter the value of x: ");
    scanf("%d", &x);
    for (int i = 1; i <= n; i++)
    {

        p = pow(x, i);
        fact = fact * i;
        a = p / fact;
        if (i == 1)
        {
            printf("x^%d/%d! ", i, i);
        }
        else
        {
            printf("+ x^%d/%d! ", i, i);
        }

     
        sum = sum + a;
    }

    printf("\nsum: %.1lf", sum);
}
