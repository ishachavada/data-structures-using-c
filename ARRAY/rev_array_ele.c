#include <stdio.h>
void main()
{
    int a[10];
    int n, i, temp;
    printf("enter array size: ");
    scanf("%d", &n);
    
    printf("enter array elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n / 2; i++)
    {
        temp = a[i];
        a[i] = a[n - i - 1];
        a[n - i - 1] = temp;
    }
    printf("reversed array...\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
}