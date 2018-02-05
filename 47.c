#include <stdio.h>
int main(void)
{
	int b[100],i,j,n,max,min,t;
printf(" enter the number of elements");
scanf("%d",&n);
printf(" enter the array");
for(i=0;i<=n;i++)
{
	scanf("%d",&b[i]);
}
for(i=0;i<=n;i++)
{
	for(j=i+1;j<=n;j++)
	{
	if(b[i]<b[j])
	{
		t=b[i];
		b[i]=b[j];
		b[j]=b[i];
	}
}
}
for(i=0;i<=n;i++)
{
	max=b[0];
	min=b[n-1];
}
printf(" maximum value is %d",max);
printf(" minimum value is %d",min);
return 0;
}
	
