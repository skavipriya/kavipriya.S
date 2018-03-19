#include <stdio.h>
int main()
{
	int a,b,c,d;
	printf("Enter the number");
	scanf("%d%d",&a,&b);
	c=a*b;
	printf("The product is %d",c);
	d=sqrt(c);
            if(c==d*d)
            printf("perfect square");
            else
            printf("not a perfect square");
	return 0;
}
