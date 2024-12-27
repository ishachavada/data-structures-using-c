#include <stdio.h>
// call by value
// void swap(int num1, int num2)
// {
//     int temp;
//     temp = num1;
//     num1 = num2;
//     num2 = temp;
// }
// void main()
// {
//     int a, b;
//     printf("Enter 2 numbers: ");
//     scanf("%d %d", &a, &b);
//     printf("before swapping\na: %d\nb: %d", a, b);
//     swap(a, b);
//     printf("\nafter swapping\na: %d\nb: %d", a, b);
// }
// call by reference

void swap(int *num1, int *num2)
{
    int *temp;
    *temp = *num1;
    *num1 = *num2;
    *num2 = *temp;
}
void main()
{
    int a, b;
    printf("Enter 2 numbers: ");
    scanf("%d %d", &a, &b);
    printf("before swapping\na: %d\nb: %d", a, b);
    swap(&a, &b);
    printf("\nafter swapping\na: %d\nb: %d", a, b);
}