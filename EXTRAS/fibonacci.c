#include <stdio.h>
void main(){
    int n, a=0,b=1,c;
    printf("enter the number: ");
    scanf("%d",&n);
    printf("fibonacci series: ");
    while(n>0){
        c=a+b;
        a=b;
        b=c;
    }
    printf("%d",c);
    
}