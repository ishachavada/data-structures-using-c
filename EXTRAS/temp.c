#include <stdio.h>
int main(){
    int n,i=1;
    for(i=1;i<1000;i++){
        if((n%i==0)){
            printf("%d ",i);
        }
    }
}