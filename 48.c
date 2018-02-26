#include <stdio.h>
int main() 
{
	int a[20],i,j,n,t;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i]<a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			
			}
		}
		}
	printf("The average number i%d",a[n/2]);    
	return 0;
}
