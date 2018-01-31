#include <stdio.h>

int main(void)
{
	int a=150,b=160;
	a=a^b;
	b=a^b;
	a=a^b;
	printf("swapping of two number is %d %d",a,b);
	return 0;
}
