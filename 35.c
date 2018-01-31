#include<stdio.h>
int main()
{
char str[25];
int k,count=0;
printf("Enter the string:");
scanf("%s",&str[k]);
for(k=0;str[k]!=NULL;k++)
{
if(str[k]>=1||str[k]<=9)
count++;
}
printf("%d",count);
}
