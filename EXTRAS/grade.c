#include<stdio.h>
int main(){
    char g;
    printf("enter the grade: ");
    scanf("%c",&g);
    switch (g)
    {
    case 'o': 
        printf("91-100");
        break;
    
    case 'a': 
        printf("81-90");
        break;
    
    case 'b': 
        printf("71-80");
        break;
    
    case 'c': 
        printf("61-70");
        break;
    
    case 'd': 
        printf("51-60");
        break;
    
    case 'f': 
        printf("below 50");
        break;

    default:
        break;
    }
}