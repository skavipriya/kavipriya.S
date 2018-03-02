#include <stdio.h>
#include<string.h>
int main(void) 
{
	char str[20];
	int n,i,count;
	printf("enter the string:");
	scanf("%s",str);
	n=strlen(str);
	for(i=0;i<n;i++)
	{
		if((str[i]>='a'&&str[i]<='z')||(str[i]>='A' && str[i]<='Z'))
		{
			count=1;
		}
		else if(str[i]>='0' && str[i]<='9')
		{
			count=2;
		}
		else
		{
			count=0;
		}

	}
	if(count==1 && count==2)
	{
		printf("\n yes");
	}
	else
	{
		printf("\n no");
	}

	return 0;
}
