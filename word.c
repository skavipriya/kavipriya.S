#include <stdio.h>
int main(void)
{
	int l,count=0;
	char a[100];
	printf("enter sentence:\n");
	scanf("%[^\n]s",&a);
	for(l=0;a[l]!='\0';l++)
	{
		if(a[l]==' ')
		{
			count=count++;
			
		}
	}
	printf("no of space: %d",count);
	return 0;
}
