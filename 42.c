#include <stdio.h>
int main() 
{
	char str1[20],str2[20];
	int n1,n2;
	printf("enter the string1:");
	scanf("%s",str1);
	printf("enter the string2:");
	scanf("%s",str2);
	n1=strlen(str1);
	n2=strlen(str2);
	if(n1>n2)
	{
		printf("%s",str1);
	}
	else if(n2>n1)
	{
		printf("%s",str2);
	}
	else
	{
		printf("%s",str2);
	}
	return 0;
}
