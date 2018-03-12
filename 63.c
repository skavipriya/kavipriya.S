#include <stdio.h>
#include<string.h>
int main()

{
	int i,m,count=1;
	char a[10];
	scanf("%s",&a);
	n=strlen(a);
	for(i=0;i<m;i++)
	{
		if(a[i]==' ')
		{
			count++;
		}
	}
	printf("%d",count);
}
