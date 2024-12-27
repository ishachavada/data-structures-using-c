#include <stdio.h>
void main()
{
    int num, sq;
    printf("enter the number: ");
    scanf("%d", &num);
    while (num)
    {
        if (num > 0)
        {
            sq = num * num;
            printf("%d", sq);
            break;
        }
        else
        {
            while (num <= 0)
            {
                printf("enter the number: ");
                scanf("%d", &num);
            }
        }
    }
}