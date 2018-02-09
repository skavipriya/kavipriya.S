#include <stdio.h>
int main()
{
	int i,count=0;
	char str[30];
	scanf("%s",&str);
	for(i=0;str[i]!=NULL;i++)
	{
		if(str[i]=='.')
		count=count;
		else
		count++;
	}
	printf("The number of lines:%d",count-1);
	return 0;
}
