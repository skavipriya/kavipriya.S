#include <stdio.h>

int main(void) {
	int i,a,b,rem;
	printf("enter the  numbers");
	scanf("%d%d",&a,&b);
	for(i=a;i<=b;i++)
{
	rem=i%2;
	if(rem==0)
	printf("%denter the even number",i);
}
	return 0;
}
