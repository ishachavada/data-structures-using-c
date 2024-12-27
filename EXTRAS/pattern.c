#include <stdio.h>
int main(){
	int i,j,n,k;
	printf("enter the value of n: ");
	scanf("%d",&n);
//	for(i=1;i<=n;i++){
//		printf("\n ");
//		for(j=1;j<=i;j++){
//			printf("* ");
//		}
//	}
	for(i=1;i<n;i++){
		printf("\n ");
		for(j=1;j<=i;j++){
			printf("* ");
		}
		
	}

}