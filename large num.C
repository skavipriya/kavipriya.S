#include <stdio.h>

int main() {
	int n1,n2,n3;
	printf("enter the numbers");
	scanf("%d %d %d",&n1,&n2,&n3);
	if(n1>n2 && n1>n3)
{	printf("the largest number is %d",n1);
}
	elseif(n2>n3 && n2>n1)
{	printf("enter the largest number is ",n2);
	}
	else
{	printf("enter the largest number is",n3);
}
return 0;
}
