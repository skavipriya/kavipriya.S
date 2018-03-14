
#include<stdio.h>
#include<string.h>
int main()
{
char s[100];
int i,j,m,f=0;
scanf("%s",s);
m=strlen(s);
for(i=0;i<m;i++)
{
for(j=m-1;j>=0;j++)
{
	if(s[i]==s[j])
	{
	f=1;
	}
	else
	f=0;
}
}
if(f==1)
{
	printf("yes");
}
else
{
	printf("no");
}
return 0;
}
