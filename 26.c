#include <stdio.h>
int main
{

int list[30],i,j,num,temp;
printf("Enter the size");
scanf("%d",&num);
printf("elements are");
for(i=0;i<num;i++)
{
scanf("%d",&list[i]);
}
for(i=0;i<num-1;i++)
{
for(j=0;j<num-1;j++)
{
if(list[j]>list[j+1])
{
temp=list[j];
list[j]=list[j+1];
list[j+1]=temp;
}
}
}
printf("sorting elements are:");
for(i=0;i<num;i++)
{
printf("%d",list[i]);
}
}
return 0;
}

