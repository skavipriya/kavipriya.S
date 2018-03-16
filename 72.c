#include <stdio.h>
#include <string.h>
int main() 
{
	char c[20];
	int i,j,count=0;
	printf("Enter the String");
	scanf("%s",c);
	j=strlen(c);
	for(i=0;i<=j;i++)
	{
		if(c[i]=='a'||c[i]=='e'||c[i]=='i'||c[i]=='o'||c[i]=='u')
		{
			count ++;
		}
	}
	if(count>=0)
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}
	
	return 0;
}
