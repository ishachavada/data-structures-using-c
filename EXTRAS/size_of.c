#include <stdio.h>
void main(){
    int a=3;
    float f=3.02645;
    double d=23.5889485;
    char c='a';
    printf("%d\n",sizeof(a)); //4
    printf("%d\n",sizeof(f)); //4
    printf("%d\n",sizeof(d)); //8
    printf("%d\n",sizeof(c)); //1

}