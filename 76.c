#include <stdio.h>
int main()
{
	int i,b,flag=0;
	printf("enter the number");
	scanf("%d",&b);
	for(i=2;i<=b;i++)
	{
		if((b%i)==0)
		{
			flag++;
			break;
		}}
		if(flag!=0)
		printf("\ncomposite number");
		else 
		printf("\n not a composite number");
	
	return 0;
}
