#include <stdio.h>
int main(){
    int *p,n,i;
    printf("enter size of array: ");
    scanf("%d",&n);
    printf("enter array elements: \n");
    for(i=0;i<n;i++){
        scanf("%d",(p+i));
    }
    printf("array elements are: ");
    for(i=0;i<n;i++){
        printf("%d\t",*(p+i));
    }
}