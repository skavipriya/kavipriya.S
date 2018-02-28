#include <stdio.h>
int main() 
{
	int n;
	printf("The given number is ranging betwwen 1 to 10:");
	scanf("%d",&n);
	if(n>1 && n<10)
	{
		printf("\n Yes ");
	}
	else
	{
		printf("\n No");
	}
	
	return 0;
}
