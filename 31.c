#include <stdio.h>
int main()
{
 int i, count=0;
 char str[20]= "laptop is good";
 for(i=0;str[i]!=0;i++)
 {
 	if(str[i]==' ')
 	count=count;
 	else
 	count++;
 }
 printf("number of character in string:%d",count);
 return 0;
	}
