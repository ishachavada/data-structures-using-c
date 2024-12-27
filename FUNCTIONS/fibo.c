#include <stdio.h>
void fibo(int num)
{
    int a = 0, b = 1, c;
    printf("fibonacci series: %d %d ", a, b);
    for (int i = 0; i < num; i++)
    {
        c = a + b;
        a = b;
        b = c;
        printf("%d ", c);
    }
}
void main()
{
    int n;
    printf("enter a number: ");
    scanf("%d", &n);
    fibo(n);
}