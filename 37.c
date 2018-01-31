#include <stdio.h>

int main(void)
{
	int a=10,b=20;
	a=a+b;
	b=a-b;
	a=a-b;
	printf("swapping of two number is %d %d\n",a,b);
	return 0;
}
