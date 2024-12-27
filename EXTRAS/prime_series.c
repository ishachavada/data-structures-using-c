#include <stdio.h>
int main(){
    int i=2,n;
    printf("n: ");
    scanf("%d",&n);
    while(i<=n/2){
        if((n%i!=0)){
            printf("%d ",i);
        }
        i++;
    }
}