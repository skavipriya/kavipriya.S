#include<stdio.h>
int main()
{
	int i,j;
	printf("enter the number");
	scanf("%d",&i);
	while(i!=0)
	{
	j=i%10;
	if((j%2)!=0)
	printf("odd number is %d",j);
	i=i/10;
	}
	return 0;
	
}
