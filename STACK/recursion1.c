#include <stdio.h>

void fibo(int n)
{
	int a = 0, b = 1, c, i;
	if (n<=1)
		for (i = 0; i <= 1; i++)
			printf("%d\t", b);

	for (i = 2; i <= n; i++)
	{

		c = a + b;
		printf("%d\t", c);
		a = b;
		b = c;
	}
	// return b;
}

void main()
{
	int n;
	printf("enter n: ");
	scanf("%d", &n);
	fibo(n);
	// printf("fibo of %d is %d", n, a);
}