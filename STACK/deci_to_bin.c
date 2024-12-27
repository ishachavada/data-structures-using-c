#include <stdio.h>

#define MAX 20
int Stack [MAX];
int top=-1;

void DTOB(int n){
	while(n>0){
		Stack[++top]=n%2;
		n=n/2;
	}
	while(top>-1)
	printf("%d",Stack[top--]);

}
void main(){
	int n;
	printf("enter a number: ");
	scanf("%d",&n);
	DTOB(n);
	
}