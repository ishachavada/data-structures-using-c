#include <stdio.h>
#include <math.h>
void main()
{
    int n;
    printf("enter the value of n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if(i==1)
        printf("%d/%d! ",i,i);
        else
        printf("+ %d/%d! ",i,i); 
    }
    
}
