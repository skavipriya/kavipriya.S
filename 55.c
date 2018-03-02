#include <stdio.h>
int main() 
{
	int a,b,product;
	printf("Enter the first number is :");
	scanf("%d",&a);
	printf("Enter the second number is:");
	scanf("%d",&b);
	product=a*b;
	if(product%2==0)
	{
		printf("\n Yes");
	}
	else
	{
		printf("\n No");
	}

	return 0;
}
