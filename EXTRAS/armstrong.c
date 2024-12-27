#include <stdio.h>
#include <math.h>
void main(){
    int n,n1,sum=0,s=0,rem;
    printf("enter the value of n: ");
    scanf("%d",&n);
    n1=n;
    while(n1>0){
        n1=n1/10;
        s++;
    }  
    n1=n;
    while(n1>0){
        rem=n1%10;
        n1=n1/10;
        sum=sum+pow(rem,s);
        if(sum>n)
        break;
    }  
    if(sum==n)
    printf("armstrong number");
    else
    printf("not armstrong number");
}