#include <stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the number");
	scanf("%d%d",&b,&c);
	a=b-c;
	printf("The difference is %d",a);
	if(a%2==0)
	{
    printf("yes");
	}
	else
	{
     printf("No");
    }
	return 0;
}

