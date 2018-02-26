#include <stdio.h>
int main()
{
	int n,count=0;
	scanf("%d",&n);
	while(n!=0)
	{
		n=n/10;
		count++;
	}
	printf("The num of numeric digits are:%d",count);
	return 0;
}
