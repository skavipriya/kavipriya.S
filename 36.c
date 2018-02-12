#include<stdio.h>
int main()
{
	char a[100];
	int n,i,count=0;
	scanf("%s",&a);
	n=strlen(a);
	for(i=0;i<n;i++)
	{
	if(a[i]=='.'||a[i]==','||a[i]=='#'||a[i]=='?'||a[i]=='_'||a[i]=='!')
	count=count+1;
	}
	printf("The number of special character in a given line is:%d",count);
}
