#include <stdio.h>
int main(){
    int a,b;
    char s;
    printf("enter the numbers: ");
    scanf("%d %d",&a,&b);
    fflush(stdin);
    printf("write the operation symbol: ");
    scanf("%c", &s);
    
    switch (s)
    {
    case '+':
        printf("sum: %d", a+b);
        break;
    
    case '-':
        printf("sub: %d", a-b);
        break;
    
    case '*':
        printf("multiply: %d", a*b);
        break;

    case '%':
        printf("modulus: %d", a%b);
        break;

    default:
        printf("invalid");
        break;
    }

}