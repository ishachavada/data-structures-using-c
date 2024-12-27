#include <stdio.h>
void main()
{
    int n;
    printf("enter the number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n - i; j++){
            printf(" ");
        }
        // Print stars for each row
        for (int k = 1; k <= i; k++)
        {
            printf("*");
        }
        printf("\n");
    }
}