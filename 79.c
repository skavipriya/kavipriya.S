#include <stdio.h>
int main()
{
	int a,b,c,d;
	printf("Enter the number");
	scanf("%d%d",&a,&b);
	c=a*b;
	printf("The product is %d",c);
	d=c*c;
            if(c*c==d)
            printf("perfect square");
	return 0;
}
