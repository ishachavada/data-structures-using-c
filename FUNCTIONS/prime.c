#include <stdio.h>
int prime(int num)
{
    int i=2;
    if (num < 2)
    {
        return 0;
    }
    while (i <= num / 2)
    {
        if (num % i == 0)
        {
            return 0;
        }
        i++;
    }
    return 1;
}
void main()
{
    int n,a;
    printf("enter a number: ");
    scanf("%d", &n);
    a=prime(n);
    if(a==1)
    printf("Prime number");
    else
    printf("Not prime");
}