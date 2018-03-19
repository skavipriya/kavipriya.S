#include <stdio.h>
int main()
{
	int a;
	printf("Enter the number");
	scanf("%d",&a);
	if(a%13==0)
	{
		printf("yes");
	}
	else
	{
		printf("No");
	}
	return 0;
}
