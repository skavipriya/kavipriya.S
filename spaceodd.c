#include <stdio.h>

int main(void) {
	int num,m=2,n=7;
	printf("print odd number in a given range m to n:/n");
	for (num=m;num<=n;num++)
	{
		if(num%2==1)
		printf("%d",num);
	}
	return 0;
}
