#include <stdio.h>

int main(void) {
	int n,sum=0,d,a;
	printf("enter the number");
	scanf("%d",&n);
	a=n;
	while(a!=0)
	{
		d=a%10;
		sum=sum+d*d*d;
		a=a/10;
	}
	if(sum==n)
	{
		printf("armstrong");
	}
	else
	{
		printf("not armstrong");
	  
	}
	
	return 0;
}
