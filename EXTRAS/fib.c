#include <stdio.h>
void main(){
	int a=0,b=1,c,n;
	printf("enter n: ");
	scanf("%d",&n);
	printf("fibonacci series: %d %d ",a,b);
	for(int i=0;i<n;i++){
		c=a+b;
		a=b;
		b=c;
		printf("%d ",c);
	}
}