#include <stdio.h>
#include <ctype.h>
#include <math.h>

#define max 10
float Stack[max];
int top=-1;

void PostEval(char Post[]){
	int i;
	char ch;
	float temp,p1,p2;
	for(i=0;Post[i]!='\0';i++){
		ch=Post[i];
		if(isalpha(ch)){
			printf("Read value of %c: ",ch);
			scanf("%f",&temp);
			Stack[++top]=temp;
		}else{
			p1=Stack[top--];
			p2=Stack[top--];
			switch(ch){
				case '+': Stack[++top]=p2+p1;
				break;
				case '-': Stack[++top]=p2-p1;
				break;
				case '*': Stack[++top]=p2*p1;
				break;
				case '/': Stack[++top]=p2/p1;
				break;
				case '^': Stack[++top]=pow(p2,p1);
				break;
			}
		}
	}
} 

void main(){
	char Post[20];
	printf("enter the exp: \n");
	gets(Post);
	PostEval(Post);
	printf("Evaluated exp.\n.2%f",Stack[top--]);
	
}