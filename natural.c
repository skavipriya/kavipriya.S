#include <stdio.h>

int main(void) {
	int i, n;
	printf("enter the number");
	scanf("%d",&n);
	int sum=0;
	for(i=0; i<=n; i++)
	{
		sum=sum+i;
	}
	printf("%d",sum);
	
	return 0;
}
