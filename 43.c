#include<string.h>
int main()
{
	char a[20],b[20],i,j;
	printf("enter the string 1:");
	scanf("%s",&a);
	printf("enter the string 2:");
	scanf("%s",&b);
	for(i=0;a[i]!='\0';++i)
	{
		for(i=0;b[j]!='\0';++j,++i)
		{
			a[i]=b[j];
		}
		a[i]='\0';
	}
	printf("%s",a);
  return 0;
}
