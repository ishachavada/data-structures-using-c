#include <stdio.h>
void airth(int a, int b, int *sum, int *sub, int *m, float *d)
{
    *sum = a + b;
    *sub = a - b;
    *m = a * b;
    *d = a / b;
}
void main()
{
    int num1, num2, sum, sub, pro;
    float div;
    printf("Enter 2 numbers: ");
    scanf("%d %d", &num1, &num2);
    airth(num1, num2, &sum, &sub, &pro, &div);
    printf("Sum: %d\nSub: %d\nProduct: %d\nDiv: %.2f", sum, sub, pro, div);
}