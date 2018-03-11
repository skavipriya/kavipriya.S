#include <stdio.h>
int main() 
{
int arr[30];
int m,i,max=arr[0];
printf("Enter the number of elements:");
scanf("%d",&m);
printf(" Enter the array elements:");
for(i=0;i<m;i++)
{
scanf("%d",&arr[i]);
}
for(i=0;i<m;i++)
{
	if(arr[i]>max)
{
	max=arr[i];
}
}
printf("The maximum of the numbers is:%d",max);
return 0;
}
