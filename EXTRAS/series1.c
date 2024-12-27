#include <stdio.h>
#include <math.h>
void main()
{
    int n,x;
    printf("enter the value of n: ");
    scanf("%d", &n);
    printf("enter the value of x: ");
    scanf("%d", &x);
    for (int i = 1; i <= n; i++)
    {
        if(i==1)
        printf("%d ",x);
        else if(i%2!=0)
        printf("-%d^%d ",x,i);
        else if(i%2==0)
        printf("+%d^%d ",x,i);
    }
    
}
