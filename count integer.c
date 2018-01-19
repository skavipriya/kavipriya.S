#include <stdio.h>

int main(void) {
	int n=548;
	int count=0;
	while(n!=0)
	{
		n=n/10;
		++count;
	}
	printf("number of digits %d",count);
	return 0;
}
