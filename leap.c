#include <stdio.h>
 
int main(void) {
	int n;
	printf("enter the year");
	scanf("%d",&n);
	if(n%0==4)
	printf("leap year");
	else
	printf("not a leap year");
	return 0;
}
