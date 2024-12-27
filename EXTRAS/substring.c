#include <stdio.h>
#include <string.h>
void main(){
    int l;
    char str[80]="banatsthali uni is located near jaipur";
    char str1[20]="jaipur";
    for(int i=0,j=0;str[i]!='\0';i++){
        int j=0;
        int ch=str[i];
        if(ch==str1[j]){
                j++;
        }else{
            if(j==strlen(str1))
            i++;
        }
        j=0;
    }
}