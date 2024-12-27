#include <stdio.h>

void fact(int num)
{
    int fact = 1, i;
    for (i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    printf("factorial of %d is %d", num, fact);
}
void main()
{
    int n, i;
    printf("Enter a number: ");
    scanf("%d", &n);
    fact(n);
}